echo off


cc65\bin\cc65 -O -t plus4 --include-dir source/header source/happyted.c
cc65\bin\ca65 source/happyted.s
cc65\bin\ar65  r lib/happyted.lib source/happyted.o

del source\*.o
del source\*.s

del lib\header\happyted.h
copy source\header\happyted.h lib\header\happyted.h
pause