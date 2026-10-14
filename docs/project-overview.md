# Project Overview

## Purpose

The Self-Balancing Delivery Robot is a two-wheeled robotics project intended to explore dynamic balancing and small-payload delivery. Unlike a conventional four-wheel platform, a two-wheel self-balancing robot must continually correct its tilt to remain upright.

## Main objectives

- Interface an ESP32 with an MPU6050 inertial measurement unit.
- Control two geared DC motors using an L298N motor driver.
- Make use of wheel encoders for motion feedback.
- Develop a repeatable control loop and evaluate balance performance.
- Keep design decisions and test observations documented.

## Known project components

The components associated with the project are an ESP32 development board, MPU6050 IMU, L298N motor driver, and two N20 geared motors with encoders. The exact board revision, encoder output type, electrical ratings, and final pin mapping are not currently documented.

## Project status

The original source code is no longer available. This document records the project concept and intended system only; it does not certify that a complete working firmware or a successfully balancing prototype is present in this repository.
