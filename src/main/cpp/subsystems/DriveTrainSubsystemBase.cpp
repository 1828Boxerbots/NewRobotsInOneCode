// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveTrainSubsystemBase.h"

DriveTrainSubsystemBase::DriveTrainSubsystemBase() = default;

// This method will be called once per scheduler run
void DriveTrainSubsystemBase::Periodic() {}

void DriveTrainSubsystemBase::MoveTank(double left, double right)
{
    SetLeft(left);
    SetRight(right);
}

void DriveTrainSubsystemBase::MoveArcade(double X, double Y)
{
    double leftY = Y + X;
    double rightY = Y - X;
    MoveTank(leftY, rightY);
}

void DriveTrainSubsystemBase::SetDriveStyle(DriveStyles style)
{
    m_currentStyle = style;
}

DriveTrainSubsystemBase::DriveStyles DriveTrainSubsystemBase::GetDriveStyle()
{
    return m_currentStyle;
}