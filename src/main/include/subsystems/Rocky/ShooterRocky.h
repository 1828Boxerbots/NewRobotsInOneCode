// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "../ShooterSubsystemBase.h"

#include <frc/motorcontrol/Spark.h>

#include "Constants.h"

class ShooterRocky : public ShooterSubsystemBase {
 public:
  ShooterRocky();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void ShootMotor(double speed) override;

 private:
  frc::Spark m_shooter{PWM_ROCKY_SHOOT};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
