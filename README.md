# Self-Balancing Delivery Robot

A self-balancing delivery robot project built around an ESP32-based control system. The project explores using inertial sensing, motor actuation, encoder feedback, and closed-loop control to keep a two-wheeled robot upright while carrying a payload.

> **Documentation status:** This repository currently contains project documentation, not the original complete robot firmware. The original source code is no longer available, so no claim is made that the firmware in this repository implements balancing or that the robot is currently buildable from these files alone.

## Project goals

- Explore two-wheel self-balancing robot control.
- Read tilt and angular-rate information from an MPU6050 IMU.
- Drive two geared DC motors through an L298N motor driver.
- Use motor encoders as feedback for motion measurement.
- Document the system architecture and a responsible path for rebuilding the firmware.

## Hardware associated with the project

| Component | Intended role |
|---|---|
| ESP32 development board | Main controller |
| MPU6050 IMU | Measures acceleration and angular velocity |
| L298N dual H-bridge module | Drives the two DC motors |
| Two N20 geared DC motors with encoders | Robot movement and wheel feedback |
| Chassis, wheels, and suitable battery | Mechanical platform and power |

Exact board revision, motor ratings, encoder wiring, battery specification, and pin assignments should be verified against the actual parts before rebuilding.

## How the system is intended to work

1. The MPU6050 provides acceleration and gyroscope measurements.
2. The controller estimates the robot's tilt and angular motion.
3. A control algorithm (typically a PID-style loop, with appropriate angle estimation) calculates a corrective motor command.
4. The motor driver applies the command to the left and right motors.
5. Encoder feedback can be used to measure wheel movement and support speed or position control.
6. The loop repeats at a consistent control interval to try to keep the robot upright.

This is a high-level design description, not a claim that these functions are implemented in the code currently in this repository.

## Repository structure

```text
RobotSelf-Balancing-Delivery-Robot/
├── README.md
├── docs/
│   ├── project-overview.md
│   ├── system-design.md
│   └── testing-status.md
├── images/
│   └── README.md
└── firmware/
    └── SelfBalancingRobot/
        └── SelfBalancingRobot.ino
```

The firmware path above may contain a starter sketch that prints serial messages. If present, it is only a setup/demo sketch and **is not the original self-balancing firmware**.

## Current status and limitations

- Project concept and intended hardware are documented.
- The original complete firmware is unavailable.
- Exact wiring, control gains, angle-estimation method, sampling rate, and test results have not been recovered.
- No current claim is made that the robot balances successfully based on this repository alone.
- The `images/` directory is a placeholder for genuine project photos or diagrams if they are available.

## Rebuilding the project

Before powering the motors, verify the pinout and voltage requirements of the exact ESP32 board, IMU breakout, motor driver, motors, and battery. Test the IMU and motor directions separately, secure the robot on a stand for initial motor tests, and keep the wheels clear of the floor while tuning the balance controller.

A future firmware implementation should be developed and tested incrementally, with measured results recorded in `docs/testing-status.md`.

## License

No license has been selected yet. Add a license only when you are ready to specify how others may use, modify, and distribute this work.
