// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Rocky/ShooterRocky.h"

ShooterRocky::ShooterRocky() = default;

// This method will be called once per scheduler run
void ShooterRocky::Periodic() {}

void ShooterRocky::ShootMotor(double speed)
{
    m_shooter.Set(speed);
}
