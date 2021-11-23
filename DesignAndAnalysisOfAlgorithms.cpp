// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Util.h"
#include "Sorting.h"
#include "GraphSearch.h"
#include "PermSetGenerators.h"
#include "ConvexHull.h"
#include "TopologicalSorting.h"
#include "BinarySearchTree.cpp"
#include "Finders.h"
#include "mean.h"
#include "minmax.h"
#include "Fibonacci.h"
#include "Elements.h"
#include "SpanningTree.h"
#include "CoinRow.h"
#include "Knapsack.h"
#include "Backtracking.h"
#include <vector>
#include <queue>
#include <list>
#include <chrono>


int main()
{
	std::vector<std::vector<int>> sudoku(
		{ {0, 0, 0, 0, 4, 0, 0, 0, 0},
		{0, 0, 0, 9, 0, 8, 0, 0, 0},
		{9, 0, 8, 0, 0, 0, 4, 0, 1},
		{0, 5, 9, 0, 1, 0, 3, 7, 0},
		{0, 0, 0, 7, 0, 9, 0, 0, 0},
		{0, 2, 7, 0, 5, 0, 6, 9, 0},
		{8, 0, 4, 0, 0, 0, 2, 0, 6},
		{0, 0, 0, 5, 0, 3, 0, 0, 0},
		{0, 0, 0, 0, 2, 0, 0, 0, 0} }
	); 

	/*std::vector<std::vector<int>> sudoku(
		{ {0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{9, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0} }
	);*/


	solve_sudoku(sudoku);

	//solve_nqueen(4);

}


