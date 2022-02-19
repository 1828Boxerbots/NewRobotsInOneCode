// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/DriveCMD.h"

DriveCMD::DriveCMD(DriveTrainSubsystemBase* pDriveTrain, frc::XboxController* pController, DriveTrainSubsystemBase::DriveStyles style)
{
  // Use addRequirements() here to declare subsystem dependencies.
  m_pDriveTrain = pDriveTrain;
  m_pController = pController;

  m_style = style;

  AddRequirements(pDriveTrain);
}

// Called when the command is initially scheduled.
void DriveCMD::Initialize() 
{
  m_pDriveTrain->SetDriveStyle(m_style);
}

// Called repeatedly when this Command is scheduled to run
void DriveCMD::Execute()
{
  switch (m_pDriveTrain->GetDriveStyle())
  {
    //Tank Drive
    case DriveTrainSubsystemBase::TANK_DRIVE:
      m_left = -m_pController->GetLeftY();
      m_right = -m_pController->GetRightY();
      CheckDeadZone(m_left);
      CheckDeadZone(m_right);
      m_pDriveTrain->MoveTank(m_left * m_scale, m_right * m_scale);
      break;

    //Arcade Drive
    case DriveTrainSubsystemBase::ARCADE_DRIVE:
      m_left = m_pController->GetLeftY();
      m_right = -m_pController->GetLeftX();
      CheckDeadZone(m_left);
      CheckDeadZone(m_right);
      m_pDriveTrain->MoveArcade(m_right * m_scale, m_left * m_scale);
      break;

    //RC Drive
    case DriveTrainSubsystemBase::RC_DRIVE:
      m_left = -m_pController->GetLeftY();
      m_right = m_pController->GetRightX();
      CheckDeadZone(m_left);
      CheckDeadZone(m_right);
      m_pDriveTrain->MoveArcade(m_right * m_scale, m_left * m_scale);
      break;

    //Uh oh forgot to SetDrive()
    default:
      m_pDriveTrain->SetDriveStyle(DriveTrainSubsystemBase::RC_DRIVE);
      break;
  }
}

double DriveCMD::CheckDeadZone(double stickInput)
{
  if(stickInput > -m_deadZoneRange && stickInput < m_deadZoneRange)
  {
    return 0.0;
  }

  return stickInput;
}

// Called once the command ends or is interrupted.
void DriveCMD::End(bool interrupted) {}

// Returns true when the command should end.
bool DriveCMD::IsFinished() {
  return false;
}