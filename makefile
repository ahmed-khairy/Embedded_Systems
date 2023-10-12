main.obj : main.c SDBAPP.h
	gcc -c main.c -o main.obj

SDBAPP.obj: SDBAPP.c STD.h SDBAPP.h SDB.h
	gcc -c SDBAPP.c -o SDBAPP.obj

SDB.obj: SDB.c SDB.h
	gcc -c SDB.c -o SDB.obj

Build : main.obj SDBAPP.obj SDB.obj
	gcc main.obj SDBAPP.obj SDB.obj -o App.exe