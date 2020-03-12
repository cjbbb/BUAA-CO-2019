@echo off

IF "%2"=="" (
	echo Usage: %0 ^<mips directory^> ^<asm^>
	exit /b
)

setlocal

set ori=%cd%

call "%~dp0\export.bat"

mkdir "%~dp0\tmp" 2> NUL

echo "%~dp0\__mips_tb.v" > "%~dp0\tmp\__mips_tb_beh.files"
dir "%1" /s /b | "%~dp0\bin\grep" .v$ >> "%~dp0\tmp\__mips_tb_beh.files"

"%~dp0\bin\sed" -e "s/^/verilog work /" "%~dp0\tmp\__mips_tb_beh.files" > "%~dp0\tmp\__mips_tb_beh.prj"

echo Compiling
cd "%~dp0\tmp\"
"%XILINX%\bin\nt64\fuse" --nodebug -i "%1" --prj "%~dp0\tmp\__mips_tb_beh.prj" -o "%~dp0\tmp\mips_tb_beh.exe" __mips_tb > "%~dp0\tmp\fuse-compile.out" 2> "%~dp0\tmp\fuse-compile.tmp"
cd %ori%

echo Assembling
java -jar "%~dp0\jar\Mars.jar" %MAXINS% %DBFLAG% mc CompactDataAtZero a dump 0x00003000-0x00003ffc HexText "%~dp0\tmp\code.txt" "%2" > NUL 2> NUL

echo Generating Answer
java -jar "%~dp0\jar\Mars.jar" %MAXINS% %DBFLAG% nc mr mm mc CompactDataAtZero "%2" > "%~dp0\tmp\ans.txt" 2> NUL

echo Simulating
cd "%~dp0\tmp\"
echo run %MAXSIMTIME%; > "%~dp0\tmp\__mips_tb_beh.cmd"
echo exit; >> "%~dp0\tmp\__mips_tb_beh.cmd"

"%~dp0\tmp\mips_tb_beh.exe" -intstyle silent -nolog -tclbatch "%~dp0\tmp\__mips_tb_beh.cmd" > "%~dp0\tmp\out.txt" 2> NUL
cd %ori%

echo Preprocessing
type "%~dp0\tmp\ans.txt" | "%~dp0\bin\grep" "@.*$" > "%~dp0\tmp\ans-pre.txt"
type "%~dp0\tmp\out.txt" | "%~dp0\bin\grep" "@.*$" > "%~dp0\tmp\out-pre.lines"
"%~dp0\bin\sed" -e "s/^.*@/@/" "%~dp0\tmp\out-pre.lines" > "%~dp0\tmp\out-pre.txt"

echo Comparing
"%~dp0\bin\diff" -q "%~dp0\tmp\ans-pre.txt" "%~dp0\tmp\out-pre.txt" 2> NUL > NUL
echo Finished %errorlevel%

endlocal

"%~dp0\bin\diff" -q "%~dp0\tmp\ans-pre.txt" "%~dp0\tmp\out-pre.txt"
exit /b %errorlevel%
