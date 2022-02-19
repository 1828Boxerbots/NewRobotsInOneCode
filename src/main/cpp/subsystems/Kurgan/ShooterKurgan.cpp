// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Kurgan/ShooterKurgan.h"

ShooterKurgan::ShooterKurgan() = default;

// This method will be called once per scheduler run
void ShooterKurgan::Periodic() {}

void ShooterKurgan::Init()
{
    // right 
    m_shoot2.SetInverted(true);
    m_shoot4.SetInverted(true);
}

void ShooterKurgan::ShootMotor(double speed)
{
    m_shoot1.Set(speed);
    m_shoot2.Set(speed);
    m_shoot3.Set(speed);
    m_shoot4.Set(speed);
}
