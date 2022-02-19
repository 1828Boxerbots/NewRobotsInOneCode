// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>

#include "../ShooterSubsystemBase.h"

#include <frc/motorcontrol/Victor.h>
#include "Constants.h"

class ShooterKurgan : public ShooterSubsystemBase {
 public:
  ShooterKurgan();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void Init() override;
  void ShootMotor(double speed) override;

 private:
  frc::Victor m_shoot1{PWM_KURGAN_SHOOTER1};
  frc::Victor m_shoot2{PWM_KURGAN_SHOOTER2};
  frc::Victor m_shoot3{PWM_KURGAN_SHOOTER3};
  frc::Victor m_shoot4{PWM_KURGAN_SHOOTER4};
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
