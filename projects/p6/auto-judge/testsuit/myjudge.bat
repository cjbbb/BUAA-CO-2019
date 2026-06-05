@echo off
setlocal
set /a nowtime = 0
set /a limit = 1000
echo Will run for %limit% times.
echo.  
:loop
TIMEOUT /T 0
set /a nowtime = %nowtime% + 1
echo nowtime: %nowtime%

python rand_ins.py > ins.asm
call judge.bat p60 ins.asm
echo errorlevel:%errorlevel%
if "%errorlevel%" == "0" (
	goto loop
)

if %nowtime% == %limit% (
	goto end
)
:error:
echo Error! at %nowtime%
endlocal
:end
pause
exit /b