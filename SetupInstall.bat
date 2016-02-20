@echo off
title Git Mover
cls

echo Moving 'Git\PortableGit_WIN32' into 'Win32\Debug\GitPortable"'

if exist "Win32" (
	rmdir /Q /S "Win32"
)

mkdir "Win32"
cd Win32

mkdir "Debug"
cd Debug

if exist ".\GitPortable" (
	rmdir /Q /S ".\GitPortable"
)

mkdir ".\GitPortable"
cd ".\GitPortable"

xcopy "..\..\..\Git\PortableGit_WIN32"  /e

cd ..\..

echo Moving 'Git\PortableGit_WIN32' into 'Win32\Release\GitPortable"'

mkdir "Release"
cd Release

if exist ".\GitPortable" (
	rmdir /Q /S ".\GitPortable"
)

mkdir ".\GitPortable"
cd ".\GitPortable"

xcopy "..\..\..\Git\PortableGit_WIN32"  /e

cd ..\..\..\

echo Done!

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

