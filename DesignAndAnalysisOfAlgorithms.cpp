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
#include "SpanningTree.h"
#include <vector>
#include <list>
#include <chrono>

int main()
{

	std::vector<std::vector<float>> graph({ {0,3,0,0,6,5},
											{3,0,1,0,0,4},
											{0,1,0,6,0,4},
											{0,0,6,0,8,5},
											{6,0,0,8,0,2},
											{5,4,4,5,2,0} });

	printSequenceSequence(graph);

	auto start = std::chrono::system_clock::now();
	std::vector<std::vector<float>> spanning_tree = prim2(graph);
	auto end = std::chrono::system_clock::now();
	
	std::chrono::duration<double> seconds_as_double = end - start;
	std::cout << "Elapsed : " << seconds_as_double.count() << " seconds" << std::endl;



	spanning_tree = prim2(graph);
	std::cout << "Minimal Spanning Tree" << std::endl;

	printSequenceSequence(spanning_tree);

	spanning_tree = prim(graph);
	std::cout << "Minimal Spanning Tree" << std::endl;

	printSequenceSequence(spanning_tree);


}


