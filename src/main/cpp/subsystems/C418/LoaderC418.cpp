// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/C418/LoaderC418.h"

LoaderC418::LoaderC418() = default;

// This method will be called once per scheduler run
void LoaderC418::Periodic() {}

void LoaderC418::LoadMotor(double speed, LoaderSubsystemBase::LoadSection section)
{
    switch(section)
    {
        case LoaderSubsystemBase::LoadSection::INAKE:
            m_intake.Set(speed);
            break;
        case LoaderSubsystemBase::LoadSection::MIDDLE:
            m_middle.Set(speed);
            break;
        case LoaderSubsystemBase::LoadSection::UPPER:
            m_high.Set(speed);
            break;
        case LoaderSubsystemBase::LoadSection::ALL:
            m_high.Set(speed);
            m_intake.Set(speed);
            m_middle.Set(speed);
            break;
        default:
            m_high.Set(speed);
            m_intake.Set(speed);
            m_middle.Set(speed);
            break;
    }
}
