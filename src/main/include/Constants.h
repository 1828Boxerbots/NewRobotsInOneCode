// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

constexpr   int PWM_C418_LEFT = 1;
constexpr   int PWM_C418_RIGHT = 0;
constexpr   int PWM_C418_LOW = 5;
constexpr   int PWM_C418_MIDDLE = 4;
constexpr   int PWM_C418_HIGH = 6;
constexpr   int PWM_C418_SHOOTER = 5;

constexpr   int PWM_KURGAN_LEFT1 = 1;
constexpr   int PWM_KURGAN_LEFT2 = 2;
constexpr   int PWM_KURGAN_RIGHT1 = 3;
constexpr   int PWM_KURGAN_RIGHT2 = 4;
constexpr   int PWM_KURGAN_LOAD = 0;
constexpr   int PWM_KURGAN_SHOOTER1 = 6;
constexpr   int PWM_KURGAN_SHOOTER2 = 5;
constexpr   int PWM_KURGAN_SHOOTER3 = 7;
constexpr   int PWM_KURGAN_SHOOTER4 = 8; 

constexpr   int PWM_ROCKY_LEFT = 2;
constexpr   int PWM_ROCKY_RIGHT = 3;
constexpr   int PWM_ROCKY_TURRET = 4;
constexpr   int PWM_ROCKY_SHOOT = 5;
constexpr   int PWM_ROCKY_LOAD = 9;