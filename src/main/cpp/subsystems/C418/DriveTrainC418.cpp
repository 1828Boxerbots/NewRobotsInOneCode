// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/C418/DriveTrainC418.h"

DriveTrainC418::DriveTrainC418() = default;

// This method will be called once per scheduler run
void DriveTrainC418::Periodic() {}

void DriveTrainC418::Init()
{
    m_right.SetInverted(true);
}

void DriveTrainC418::SetLeft(double speed)
{
    m_left.Set(speed);
}

void DriveTrainC418::SetRight(double speed)
{
    m_right.Set(speed);
}
