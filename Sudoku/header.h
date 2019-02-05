#ifndef _HEADER_H_
#define _HEADER_H_

#define S 9 // define size of the sudoku

class Sudoku
{
	private:
		bool find_empty_location (int grid[S][S], int &row, int &col);
		bool exist_in_row (int grid[S][S], int row, int num); // check if the number already exist in the row
		bool exist_in_col (int grid[S][S], int col, int num); // check if the number already exist in the column
		bool exist_in_box (int grid[S][S], int boxStartRow, int boxStartCol, int num); // check if the number is already used in the 3x3 box
		bool check_safe (int grid[S][S], int row, int col, int num); // check if it is legal or not to assign a number to the given row, col

	public:
		Sudoku();
		void printGrid (int grid[S][S]);
		bool solver (int grid[S][S]); // Sudoku solver
};

#endif
