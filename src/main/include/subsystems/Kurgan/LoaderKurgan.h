// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>

#include "../LoaderSubsystemBase.h"

#include <frc/motorcontrol/Victor.h>
#include "Constants.h"

class LoaderKurgan : public LoaderSubsystemBase {
 public:
  LoaderKurgan();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void LoadMotor(double speed, LoaderSubsystemBase::LoadSection section = LoaderSubsystemBase::ALL) override;

 private:
  frc::Victor m_loader{PWM_KURGAN_LOAD};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
