// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include "RobotContainerBase.h"

#include "subsystems/C418/DriveTrainC418.h"
#include "subsystems/C418/LoaderC418.h"
#include "subsystems/C418/ShooterC418.h"

#include "commands/DriveCMD.h"
#include "commands/LoadCMD.h"
#include "commands/ShooterCMD.h"

class RobotContainerC418 : public RobotContainerBase
{
 public:
  RobotContainerC418();

  void Init() override;
  frc2::Command *GetAutonomousCommand() override;

  // Loader
  void SetAButton();
  void SetBButton();
  void SetXButton();
  void SetYButton();
  // Shooter
  void SetRightTrigger();
  void SetLeftTrigger();

 private:
  void ConfigureButtonBindings();

  DriveCMD *m_pDriveCMD = nullptr;

  LoadCMD *m_pAllCMD = nullptr;
  LoadCMD *m_pEjectAllCMD = nullptr;
  LoadCMD *m_pLoadStopCMD = nullptr;

  LoadCMD *m_pIntakeCMD = nullptr;
  LoadCMD *m_pEjectIntakeCMD = nullptr;

  LoadCMD *m_pMiddleCMD = nullptr;
  LoadCMD *m_pEjectMiddleCMD = nullptr;

  LoadCMD *m_pTopCMD = nullptr;
  LoadCMD *m_pEjectTopCMD = nullptr;

  ShooterCMD *m_pShooterCMD = nullptr;
  ShooterCMD *m_pReverseShootCMD = nullptr;
  ShooterCMD *m_pStopShootCMD = nullptr;
};
