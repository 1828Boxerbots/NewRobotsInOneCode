// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "robotContainers/RobotContainerC418.h"

RobotContainerC418::RobotContainerC418()
{
    m_pDrive = new DriveTrainC418;
    m_pShooter = new ShooterC418;
    m_pLoader = new LoaderC418;

    m_pDriveCMD = new DriveCMD(m_pDrive, &m_controllerOne, DriveTrainSubsystemBase::RC_DRIVE);

    m_pAllCMD = new LoadCMD(m_pLoader, 1, LoaderSubsystemBase::LoadSection::ALL);
    m_pEjectAllCMD = new LoadCMD(m_pLoader, -1, LoaderSubsystemBase::LoadSection::ALL);
    m_pLoadStopCMD = new LoadCMD(m_pLoader, 0, LoaderSubsystemBase::LoadSection::ALL);

    m_pIntakeCMD = new LoadCMD(m_pLoader, 1, LoaderSubsystemBase::LoadSection::INAKE);
    m_pEjectIntakeCMD = new LoadCMD(m_pLoader, -1, LoaderSubsystemBase::LoadSection::INAKE);

    m_pMiddleCMD = new LoadCMD(m_pLoader, 1, LoaderSubsystemBase::LoadSection::MIDDLE);
    m_pEjectMiddleCMD = new LoadCMD(m_pLoader, -1, LoaderSubsystemBase::LoadSection::MIDDLE);

    m_pTopCMD = new LoadCMD(m_pLoader, 1, LoaderSubsystemBase::LoadSection::UPPER);
    m_pEjectTopCMD = new LoadCMD(m_pLoader, -1, LoaderSubsystemBase::LoadSection::UPPER);
    
    m_pShooterCMD = new ShooterCMD(m_pShooter, 1);
    m_pReverseShootCMD = new ShooterCMD(m_pShooter, -1);
    m_pStopShootCMD = new ShooterCMD(m_pShooter, 0);
}

void RobotContainerC418::Init()
{
    SetDrive(m_pDriveCMD);
}

void RobotContainerC418::ConfigureButtonBindings()
{
    // Loader
    SetAButton();
    SetBButton();
    SetXButton();
    SetYButton();
    // Shooter
    SetRightTrigger();
    SetLeftTrigger();
}

void RobotContainerC418::SetXButton()
{
    m_xButtonOne.WhenHeld(m_pMiddleCMD);
    m_xButtonOne.WhenReleased(m_pLoadStopCMD);
}

void RobotContainerC418::SetYButton()
{
    m_yButtonOne.WhenHeld(m_pEjectAllCMD);
    m_yButtonOne.WhenReleased(m_pLoadStopCMD);
}

void RobotContainerC418::SetAButton()
{
    m_aButtonOne.WhenHeld(m_pIntakeCMD);
    m_aButtonOne.WhenReleased(m_pLoadStopCMD);
}

void RobotContainerC418::SetBButton()
{
    m_bButtonOne.WhenHeld(m_pAllCMD);
    m_bButtonOne.WhenReleased(m_pLoadStopCMD);
}

void RobotContainerC418::SetRightTrigger()
{
    m_rightTriggerOne.WhenHeld(m_pShooterCMD);
    m_rightTriggerOne.WhenReleased(m_pStopShootCMD);
}

void RobotContainerC418::SetLeftTrigger()
{
    m_leftTriggerOne.WhenHeld(m_pReverseShootCMD);
    m_leftTriggerOne.WhenReleased(m_pStopShootCMD);
}

frc2::Command* RobotContainerC418::GetAutonomousCommand()
{
    return nullptr;
}