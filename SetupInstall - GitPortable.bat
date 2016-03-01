@echo off
cls
title Git Mover

cd Win32\
cd Debug\

echo Moving 'Git\PortableGit_WIN32' into 'Win32\Debug\GitPortable"'

if exist ".\GitPortable" (
	rmdir /Q /S ".\GitPortable"
)

mkdir ".\GitPortable"
cd ".\GitPortable"

xcopy "..\..\..\Git\PortableGit_WIN32"  /e

cd ..\..

echo Moving 'Git\PortableGit_WIN32' into 'Win32\Release\GitPortable"'

cd Release

if exist ".\GitPortable" (
	rmdir /Q /S ".\GitPortable"
)

mkdir ".\GitPortable"
cd ".\GitPortable"

xcopy "..\..\..\Git\PortableGit_WIN32"  /e

cd ..\..\..\

echo Done!
