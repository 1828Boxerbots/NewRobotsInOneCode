// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "../DriveTrainSubsystemBase.h"

#include <frc/motorcontrol/Victor.h>
#include "Constants.h"

class DriveTrainKurgan : public DriveTrainSubsystemBase {
 public:
  DriveTrainKurgan();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void Init() override;
  void SetLeft(double speed) override;
  void SetRight(double speed) override;

 private:
  frc::Victor m_left1{PWM_KURGAN_LEFT1};
  frc::Victor m_left2{PWM_KURGAN_LEFT2};
  frc::Victor m_right1{PWM_KURGAN_RIGHT1};
  frc::Victor m_right2{PWM_KURGAN_RIGHT2};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
