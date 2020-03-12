@echo off

echo Assembling
java -jar "Mars.jar" "%1" 50000 db mc CompactDataAtZero a dump 0x00003000-0x00003ffc HexText "code.txt"

java -jar "Mars.jar" "%1" 50000 db mc CompactDataAtZero a dump 0x00004180-0x00004600 HexText "code_handler.txt"