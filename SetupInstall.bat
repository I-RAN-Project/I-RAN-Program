@echo off
title Setup
cls

echo Setup!

if exist "Win32" (
	rmdir /Q /S "Win32"
)

mkdir "Win32"
cd Win32

mkdir "Debug"
mkdir "Release"

cd ..\

call ".\SetupInstall - RuntimeLibs.bat"
call ".\SetupInstall - RW.bat"
