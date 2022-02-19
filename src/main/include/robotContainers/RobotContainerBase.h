// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>
#include <frc2/command/RunCommand.h>
#include <frc2/command/button/Button.h>

#include "subsystems/DriveTrainSubsystemBase.h"
#include "subsystems/LoaderSubsystemBase.h"
#include "subsystems/ShooterSubsystemBase.h"
#include "commands/DriveCMD.h"

#include <frc/XboxController.h>

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainerBase {
 public:
  RobotContainerBase();

  virtual void TeleopPeriodic() {}
  virtual void AutonomousPeriodic() {}
  virtual void Init() {};
  virtual frc2::Command *GetAutonomousCommand() { return nullptr; }

  void SetDrive(DriveCMD* pcmd);

  //Subsystems
  DriveTrainSubsystemBase* m_pDrive = nullptr;
  LoaderSubsystemBase *m_pLoader = nullptr;
  ShooterSubsystemBase *m_pShooter = nullptr;

  //Controllers
  frc::XboxController m_controllerOne{0};
  frc::XboxController m_controllerTwo{1};

  // Buttons
  frc2::Button m_aButtonOne{[this] { return m_controllerOne.GetAButton(); }};
  frc2::Button m_aButtonTwo{[this] { return m_controllerTwo.GetAButton(); }};

  frc2::Button m_bButtonOne{[this] { return m_controllerOne.GetBButton(); }};
  frc2::Button m_bButtonTwo{[this] { return m_controllerTwo.GetBButton(); }};

  frc2::Button m_xButtonOne{[this] { return m_controllerOne.GetXButton(); }};
  frc2::Button m_xButtonTwo{[this] { return m_controllerTwo.GetXButton(); }};

  frc2::Button m_yButtonOne{[this] { return m_controllerOne.GetYButton(); }};
  frc2::Button m_yButtonTwo{[this] { return m_controllerTwo.GetYButton(); }};

  frc2::Button m_rightTriggerOne{[this] { return m_controllerOne.GetRightTriggerAxis(); }};
  frc2::Button m_rightTriggerTwo{[this] { return m_controllerTwo.GetRightTriggerAxis(); }};

  frc2::Button m_leftTriggerOne{[this] { return m_controllerOne.GetLeftTriggerAxis(); }};
  frc2::Button m_leftTriggerTwo{[this] { return m_controllerTwo.GetLeftTriggerAxis(); }};

  frc2::Button m_rightBumperOne{[this] { return m_controllerOne.GetRightBumper(); }};
  frc2::Button m_rightBumperTwo{[this] { return m_controllerTwo.GetRightBumper(); }};

  frc2::Button m_leftBumperOne{[this] { return m_controllerOne.GetLeftBumper(); }};
  frc2::Button m_leftBumperTwo{[this] { return m_controllerTwo.GetLeftBumper(); }};

  frc2::Button m_startButtonOne{[this] { return m_controllerOne.GetStartButton(); }};
  frc2::Button m_startButtonTwo{[this] { return m_controllerTwo.GetStartButton(); }};

  frc2::Button m_backButtonOne{[this] { return m_controllerOne.GetBackButton(); }};
  frc2::Button m_backButtonTwo{[this] { return m_controllerTwo.GetBackButton(); }};

 private:

};
