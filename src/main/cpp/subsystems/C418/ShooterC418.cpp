// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/C418/ShooterC418.h"

ShooterC418::ShooterC418() = default;

// This method will be called once per scheduler run
void ShooterC418::Periodic() {}

void ShooterC418::ShootMotor(double speed)
{
    m_shooter.Set(speed);
}
