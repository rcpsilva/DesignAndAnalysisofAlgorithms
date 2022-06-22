// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <queue>
#include <list>
#include <chrono>
#include <iostream>
#include <cstdio>
#include "Greedy.h"
#include "Backtracking.h"
#include "Util.h"

int main() {

	std::vector<std::vector<int>> grid =
	{ {5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9} };

	//solve_sudoku(grid);

	//printSequenceSequence(grid);
	sudoku(grid);

	printSequenceSequence(grid);
}


