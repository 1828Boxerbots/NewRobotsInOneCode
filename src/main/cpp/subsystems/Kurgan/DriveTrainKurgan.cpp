// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Kurgan/DriveTrainKurgan.h"

DriveTrainKurgan::DriveTrainKurgan() = default;

// This method will be called once per scheduler run
void DriveTrainKurgan::Periodic() {}

void DriveTrainKurgan::Init()
{
    m_right1.SetInverted(true);
    m_right2.SetInverted(true);
}

void DriveTrainKurgan::SetLeft(double speed)
{
    m_left1.Set(speed);
    m_left2.Set(speed);
}

void DriveTrainKurgan::SetRight(double speed)
{
    m_right1.Set(speed);
    m_right2.Set(speed);
}