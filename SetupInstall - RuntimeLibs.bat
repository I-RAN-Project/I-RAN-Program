@echo off
cls
title Runtime Libraries

echo Moving 'RuntimeLibs' into 'Win32\Debug\'

cd Win32

cd Debug

xcopy "..\..\RuntimeLibs\Debug"  /e

cd ..\

echo Moving 'RuntimeLibs' into 'Win32\Release\'

cd Release

xcopy "..\..\RuntimeLibs\Release"  /e

cd ..\..\

echo Done!