// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "../DriveTrainSubsystemBase.h"

#include <frc/motorcontrol/Spark.h>
#include "Constants.h"

class DriveTrainRocky : public DriveTrainSubsystemBase {
 public:
  DriveTrainRocky();

  void Periodic() override;

  void Init() override;
  void SetLeft(double speed) override;
  void SetRight(double speed) override;

 private:
  frc::Spark m_left{PWM_ROCKY_LEFT};
  frc::Spark m_right{PWM_ROCKY_RIGHT};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
