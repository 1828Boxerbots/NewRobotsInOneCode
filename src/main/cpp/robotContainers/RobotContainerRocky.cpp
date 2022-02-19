// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "robotContainers/RobotContainerRocky.h"

RobotContainerRocky::RobotContainerRocky()
{
    m_pDrive = new DriveTrainRocky;
    m_pShooter = new ShooterRocky;
    m_pLoader = new LoaderRocky;

    m_pDriveCMD = new DriveCMD(m_pDrive, &m_controllerOne, DriveTrainSubsystemBase::RC_DRIVE);
    m_pLoadCMD = new LoadCMD(m_pLoader, 1);
    m_pEjectCMD = new LoadCMD(m_pLoader, -1);
    m_pLoadStopCMD = new LoadCMD(m_pLoader, 0);
    m_pShooterCMD = new ShooterCMD(m_pShooter, 1);
    m_pReverseShootCMD = new ShooterCMD(m_pShooter, -1);
    m_pStopShootCMD = new ShooterCMD(m_pShooter, 0);
}

void RobotContainerRocky::Init()
{
    SetDrive(m_pDriveCMD);
}

void RobotContainerRocky::ConfigureButtonBindings()
{
    // Turrets
    //SetAButton();
    //SetBButton();
    // Loader
    SetXButton();
    SetYButton();
    // Shooter
    SetRightTrigger();
    SetLeftTrigger();
}

void RobotContainerRocky::SetXButton()
{
    m_xButtonOne.WhenHeld(m_pLoadCMD);
    m_xButtonOne.WhenReleased(m_pLoadStopCMD);
}

void RobotContainerRocky::SetYButton()
{
    m_yButtonOne.WhenHeld(m_pEjectCMD);
    m_yButtonOne.WhenReleased(m_pLoadStopCMD);
}

void RobotContainerRocky::SetRightTrigger()
{
    m_rightTriggerOne.WhenHeld(m_pShooterCMD);
    m_rightTriggerOne.WhenReleased(m_pStopShootCMD);
}

void RobotContainerRocky::SetLeftTrigger()
{
    m_leftTriggerOne.WhenHeld(m_pReverseShootCMD);
    m_leftTriggerOne.WhenReleased(m_pStopShootCMD);
}

frc2::Command* RobotContainerRocky::GetAutonomousCommand()
{
    return nullptr;
}
