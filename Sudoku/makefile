main.exe: main.o sudoku.o
		g++ main.o sudoku.o -o main.exe

sudoku.o: sudoku.cpp header.h Colors.h
		g++ -c sudoku.cpp

main.o: main.cpp header.h Colors.h
	   g++ -c main.cpp
