// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Rocky/LoaderRocky.h"

LoaderRocky::LoaderRocky() = default;

// This method will be called once per scheduler run
void LoaderRocky::Periodic() {}

void LoaderRocky::LoadMotor(double speed, LoaderSubsystemBase::LoadSection section)
{
    m_loader.Set(speed);
}
