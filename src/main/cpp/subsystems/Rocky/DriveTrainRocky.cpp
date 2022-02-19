// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Rocky/DriveTrainRocky.h"

DriveTrainRocky::DriveTrainRocky() = default;

// This method will be called once per scheduler run
void DriveTrainRocky::Periodic() {}

void DriveTrainRocky::Init()
{
    m_right.SetInverted(true);
}

void DriveTrainRocky::SetLeft(double speed)
{
    m_left.Set(speed);
}

void DriveTrainRocky::SetRight(double speed)
{
    m_right.Set(speed);
}
