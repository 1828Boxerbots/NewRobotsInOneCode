// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "../ShooterSubsystemBase.h"

#include <frc/motorcontrol/Victor.h>
#include "Constants.h"

class ShooterC418 : public ShooterSubsystemBase {
 public:
  ShooterC418();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void ShootMotor(double speed) override;

 private:
  frc::Victor m_shooter{PWM_C418_SHOOTER};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
