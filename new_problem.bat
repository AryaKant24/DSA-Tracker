@echo off

set /p category=Enter Topic:
set /p problem=Enter Problem Name:

mkdir "%category%\%problem%"

copy ".template\Question.md" "%category%\%problem%\Question.md" > nul
copy ".template\Notes.md" "%category%\%problem%\Notes.md" > nul
copy ".template\solution.cpp" "%category%\%problem%\solution.cpp" > nul

echo.
echo ========================================
echo Created: %category%\%problem%
echo ========================================

code "%category%\%problem%"

pause