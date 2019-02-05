/* Andry Rafam Andrianjafy - February 2019

Sudoku solver using backtracking method */

#include <iostream>
#include "header.h"
#include "Colors.h"
using namespace std;

// 0 represent the empty cell

int main()
{
	Sudoku *s;	
	int grid_test[S][S] = {{0, 7, 8, 0, 0, 5, 0, 1, 0},
				   	   {9, 0, 0, 0, 0, 0, 0, 0, 8},
				        {0, 0, 2, 0, 6, 0, 7, 0, 3},
				        {3, 0, 0, 2, 0, 9, 0, 0, 0},
			             {0, 0, 9, 0, 0, 0, 8, 0, 0},
			             {0, 0, 0, 7, 0, 4, 0, 0, 6},
				        {2, 0, 3, 0, 7, 0, 1, 0, 0},
				        {4, 0, 0, 0, 0, 0, 0, 0, 5},
			             {0, 9, 0, 5, 0, 0, 4, 6, 0}};

	cout << "\n\n===== SUDOKU SOLVER, Andry Rafam Andrianjafy =====";
	cout << "\n\n[ ORIGINAL GRID ]\n\n";
	cout << Green << 0;
	cout << Reset << " Represent the empty cell\n\n\n";	
	s->printGrid(grid_test);
	cout << "\n\n[ SOLUTION ]\n\n";

	if (s->solver(grid_test))
		s->printGrid(grid_test);	
	else
		cout << "\nNO SOLUTION" << endl;

	return EXIT_SUCCESS;
}
