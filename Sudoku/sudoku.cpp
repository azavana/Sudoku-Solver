#include "header.h"
#include "Colors.h"
#include <iostream>
using namespace std;

Sudoku::Sudoku() { } // constructor

bool Sudoku::find_empty_location (int grid[S][S], int &row, int &col)
{
	for (row = 0; row < S; row++)
	{
		for (col = 0; col < S; col++)
		{
			if (grid[row][col] == 0)
				return true;
		}
	}
	return false;
}

// check if the number already exist in the row
bool Sudoku::exist_in_row (int grid[S][S], int row, int num)
{
	for (int col = 0; col < S; col++)
	{
		if (grid[row][col] == num)
			return true;
	}
	return false;
}

// check if the number already exist in the column
bool Sudoku::exist_in_col (int grid[S][S], int col, int num)
{
	for (int row = 0; row < S; row++)
	{
		if (grid[row][col] == num)
			return true;
	}
	return false;
}

// check if the number is already used in the 3x3 box
bool Sudoku::exist_in_box (int grid[S][S], int boxStartRow, int boxStartCol, int num)
{
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			if (grid[row+boxStartRow][col+boxStartCol] == num)
				return true;
		}
	}
	return false;
}

// check if it is legal or not to assign a number to the given row, col
bool Sudoku::check_safe (int grid[S][S], int row, int col, int num)
{
	return !exist_in_row(grid,row,num) && !exist_in_col(grid,col,num) &&
		  !exist_in_box(grid,row-row%3,col-col%3,num) && grid[row][col] == 0;
}

void Sudoku::printGrid (int grid[S][S])
{
	for (auto row = 0; row < S; row++)
	{
		for (auto col = 0; col < S; col++) 
		{
			if (grid[row][col] == 0)			
			{ cout << Green << grid[row][col] << "  "; cout << Reset; }
			else
				cout << grid[row][col] << "  ";
		}
		cout << "\n\n";
	}
	cout << "\n";
}

/* Backtracking part of the program*/
bool Sudoku::solver (int grid[S][S])
{
	int row, col;
	if (!find_empty_location (grid,row,col))
		return true;
	for (auto num = 1; num <= 9; num++)
	{
		if (check_safe (grid,row,col,num))
		{
			grid[row][col] = num;
			if (solver(grid))
				return true;
			grid[row][col] = 0;
		}
	}
	return false;
}
