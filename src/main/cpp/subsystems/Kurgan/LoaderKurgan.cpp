// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Kurgan/LoaderKurgan.h"

LoaderKurgan::LoaderKurgan() = default;

// This method will be called once per scheduler run
void LoaderKurgan::Periodic() {}

void LoaderKurgan::LoadMotor(double speed, LoaderSubsystemBase::LoadSection section)
{
    m_loader.Set(speed);
}
