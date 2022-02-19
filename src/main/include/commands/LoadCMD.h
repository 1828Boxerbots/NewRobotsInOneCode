// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/LoaderSubsystemBase.h"

/**
 * An example command.
 *
 * <p>Note that this extends CommandHelper, rather extending CommandBase
 * directly; this is crucially important, or else the decorator functions in
 * Command will *not* work!s
 */
class LoadCMD
    : public frc2::CommandHelper<frc2::CommandBase, LoadCMD> {
 public:
  LoadCMD(LoaderSubsystemBase *pLoader, double speed, LoaderSubsystemBase::LoadSection section = LoaderSubsystemBase::ALL);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;

  protected:
  LoaderSubsystemBase *m_pLoader;
  double m_speed;
  LoaderSubsystemBase::LoadSection m_section;

  bool m_isFinished = false;
};
