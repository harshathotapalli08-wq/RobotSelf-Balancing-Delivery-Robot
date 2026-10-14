# System Design

## Functional block diagram

```text
             +-------------------+
             |      MPU6050      |
             | Accel + Gyroscope |
             +---------+---------+
                       |
                       | I2C
                       v
             +-------------------+
             |       ESP32       |
             | Angle estimation  |
             | Control algorithm |
             +----+---------+----+
                  |         ^
           Motor commands   | Encoder feedback
                  |         |
                  v         |
             +-------------------+
             |       L298N       |
             |   Motor driver    |
             +----+---------+----+
                  |         |
                  v         v
              Left N20   Right N20
               motor      motor
```

This diagram shows the intended architecture. It is not a verified wiring diagram and does not specify GPIO numbers.

## Intended control sequence

1. Read accelerometer and gyroscope values from the MPU6050 over I2C.
2. Validate sensor readings and estimate the tilt angle using an appropriate sensor-fusion method.
3. Calculate a corrective command using a control loop with a fixed, measured time interval.
4. Apply direction and PWM commands through the motor driver.
5. Read encoder signals, if supported by the selected motors and wiring, to measure wheel movement.
6. Log useful diagnostic values and repeat the loop.

## Important implementation notes

- Confirm the MPU6050 breakout's supply requirements and I2C logic levels.
- Confirm the exact ESP32 board's GPIO mapping before assigning pins.
- Confirm motor-driver input, enable, and motor-supply connections from the actual module.
- Do not assume the ESP32 can power the motors directly.
- Use a suitable motor supply and establish a common ground where required by the final circuit.
- Check encoder voltage levels before connecting encoder outputs to ESP32 GPIOs.
- Secure the chassis during first motor tests; a self-balancing robot can fall or move unexpectedly.

## Parameters not recovered

The original pin map, motor polarity, encoder resolution, sample period, filter settings, PID gains, battery voltage, and measured balancing results are unknown and should not be invented in project documentation.
