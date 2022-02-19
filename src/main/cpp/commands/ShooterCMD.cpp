// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ShooterCMD.h"

ShooterCMD::ShooterCMD(ShooterSubsystemBase *pShooter, double speed)
{
  // Use addRequirements() here to declare subsystem dependencies.
  m_speed = speed;
  m_pShooter = pShooter;

  AddRequirements(m_pShooter);
}

// Called when the command is initially scheduled.
void ShooterCMD::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ShooterCMD::Execute()
{
  m_pShooter->Shoot(m_speed);
}

// Called once the command ends or is interrupted.
void ShooterCMD::End(bool interrupted) {}

// Returns true when the command should end.
bool ShooterCMD::IsFinished() {
  return m_isFinished;
}
