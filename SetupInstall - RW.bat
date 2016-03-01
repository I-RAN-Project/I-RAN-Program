@echo off
cls
title RW Install

echo Moving 'RW-Install' into 'Win32\Debug\RW-Install'

cd Win32

cd Debug

if exist ".\RW-Install" (
	rmdir /Q /S ".\RW-Install"
)

mkdir ".\RW-Install"
cd ".\RW-Install"

xcopy "..\..\..\RW-Install"  /e

cd ..\..

echo Moving 'RW-Install' into 'Win32\Release\RW-Install'

cd Release

if exist ".\RW-Install" (
	rmdir /Q /S ".\RW-Install"
)

mkdir ".\RW-Install"
cd ".\RW-Install"

xcopy "..\..\..\RW-Install"  /e

cd ..\..\..\

echo Done!
