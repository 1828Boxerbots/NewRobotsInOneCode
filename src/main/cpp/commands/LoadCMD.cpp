// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/LoadCMD.h"

LoadCMD::LoadCMD(LoaderSubsystemBase *pLoader, double speed, LoaderSubsystemBase::LoadSection section)
{
  // Use addRequirements() here to declare subsystem dependencies.
  m_speed = speed;
  m_section = section;
  m_pLoader = pLoader;

  AddRequirements(m_pLoader);
}

// Called when the command is initially scheduled.
void LoadCMD::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void LoadCMD::Execute()
{
  m_pLoader->Load(m_speed, m_section);
}

// Called once the command ends or is interrupted.
void LoadCMD::End(bool interrupted) {}

// Returns true when the command should end.
bool LoadCMD::IsFinished() {
  return m_isFinished;
}
