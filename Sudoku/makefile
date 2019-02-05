test.exe: test.o sudoku.o
		g++ test.o sudoku.o -o test.exe

sudoku.o: sudoku.cpp header.h Colors.h
		g++ -c sudoku.cpp

test.o: test.cpp header.h Colors.h
	   g++ -c test.cpp
