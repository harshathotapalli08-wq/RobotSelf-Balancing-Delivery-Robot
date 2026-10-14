# Testing and Verification Status

This file separates known documentation from work that still needs verification.

## Confirmed from the available project notes

- The project concept is a self-balancing delivery robot.
- The intended controller is an ESP32.
- The intended IMU is an MPU6050.
- The motor driver is an L298N.
- The motors are N20 geared DC motors with encoders.
- The original complete source code is no longer available.

## Not currently verified in this repository

- Whether the latest firmware can compile for the target ESP32 board.
- Whether the MPU6050 communicates successfully over I2C.
- Motor direction and PWM behavior.
- Encoder signal wiring and counts per revolution.
- Battery voltage, current capacity, and runtime.
- Tilt estimation, PID tuning, and balance performance.
- Delivery-load capacity or runtime under load.

## Recommended verification record

When hardware or source code becomes available, record each test with the date, setup, expected result, observed result, and any follow-up action.

| Test | Status | Notes |
|---|---|---|
| Original firmware recovered | Not available | Original source was lost |
| ESP32 build test | Not documented | Verify against the actual board profile |
| IMU communication test | Not documented | Record I2C address and readings |
| Motor-driver test | Not documented | Test with wheels lifted |
| Encoder test | Not documented | Confirm output levels and counts |
| Balancing test | Not documented | Do not claim success without a recorded test |

Update this file only with results that were actually observed.
