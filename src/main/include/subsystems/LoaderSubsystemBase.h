// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>

class LoaderSubsystemBase : public frc2::SubsystemBase {
 public:
  LoaderSubsystemBase();

  enum LoadSection
  {
    ALL,
    INAKE,
    MIDDLE,
    UPPER,
  };

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  virtual void LoadMotor(double speed, LoadSection section) {};

  void Load(double speed, LoadSection section = ALL);

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
