// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "../LoaderSubsystemBase.h"

#include <frc/motorcontrol/Victor.h>
#include "Constants.h"

class LoaderC418 : public LoaderSubsystemBase {
 public:
  LoaderC418();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void LoadMotor(double speed, LoaderSubsystemBase::LoadSection section = LoaderSubsystemBase::ALL);

 private:
  frc::Victor m_intake{PWM_C418_LOW};
  frc::Victor m_middle{PWM_C418_MIDDLE};
  frc::Victor m_high{PWM_C418_HIGH};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
