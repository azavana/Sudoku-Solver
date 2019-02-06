/* Andry Rafam Andrianjafy - February 2019

Sudoku solver using backtracking method */

#include <iostream>
#include "Colors.h"
#include "header.h"
using namespace std;

// 0 represent the empty cell

int main()
{
	Sudoku *s;	
	int grid_test[S][S];

	system("clear");

	cout << "\n\n===== SUDOKU SOLVER, Andry Rafam Andrianjafy =====\n\n";
	cout << Red << "Input your Sudoku, each number separate by space " << Reset << " (" << 0 << " represent empty cells )" <<"\n\n";	
	for (auto row = 0; row < S; row++)
	{
		cout << "Fill the row " << row+1 << " -> ";
		for (auto col = 0; col < S; col++)
			cin >> grid_test[row][col];
	}
	cout << "\n\n[ YOUR ORIGINAL GRID ]\n\n";
	cout << Green << 0 << " represent empty cells" << "\n\n";
	s->printGrid(grid_test);
	cout << "\n\n[ SOLUTION ]\n\n";

	if (s->backtrack(grid_test))
		s->printGrid(grid_test);	
	else
		cout << "\nNO SOLUTION" << endl;

	return EXIT_SUCCESS;
}
