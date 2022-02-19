// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "../DriveTrainSubsystemBase.h"

#include <frc/motorcontrol/Victor.h>

#include "Constants.h"

class DriveTrainC418 : public DriveTrainSubsystemBase {
 public:
  DriveTrainC418();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void Init() override;
  void SetLeft(double speed) override;
  void SetRight(double speed) override;

 private:
  frc::Victor m_left{PWM_C418_LEFT};
  frc::Victor m_right{PWM_C418_RIGHT};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
