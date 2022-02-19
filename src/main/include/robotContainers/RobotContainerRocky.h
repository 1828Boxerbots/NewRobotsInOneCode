// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "RobotContainerBase.h"

#include "subsystems/Rocky/DriveTrainRocky.h"
#include "subsystems/Rocky/LoaderRocky.h"
#include "subsystems/Rocky/ShooterRocky.h"

#include "commands/DriveCMD.h"
#include "commands/LoadCMD.h"
#include "commands/ShooterCMD.h"

class RobotContainerRocky : public RobotContainerBase
{
 public:
  RobotContainerRocky();

  void Init() override;
  frc2::Command *GetAutonomousCommand() override;

  // Turret
  void SetAButton();
  void SetBButton();
  // Loader
  void SetXButton();
  void SetYButton();
  // Shooter
  void SetRightTrigger();
  void SetLeftTrigger();

 private:
  void ConfigureButtonBindings();

  DriveCMD *m_pDriveCMD = nullptr;
  LoadCMD *m_pLoadCMD = nullptr;
  LoadCMD *m_pEjectCMD = nullptr;
  LoadCMD *m_pLoadStopCMD = nullptr;
  ShooterCMD *m_pShooterCMD = nullptr;
  ShooterCMD *m_pReverseShootCMD = nullptr;
  ShooterCMD *m_pStopShootCMD = nullptr;
};
