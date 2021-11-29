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
#include "BranchAndBound.h"
#include <vector>
#include <queue>
#include <list>
#include <chrono>


int main()
{

	std::vector<std::vector<int>> graph(
		{ {0, 3, 1, 5, 8},
		{3, 0, 6, 7, 9},
		{1, 6, 0, 4, 2},
		{5, 7, 4, 0, 3},
		{8, 9, 2, 3, 0},
		 }
	);

	solve_tsp(graph);



}


