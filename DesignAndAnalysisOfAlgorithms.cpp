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
#include <vector>
#include <queue>
#include <list>
#include <chrono>


int main()
{
	std::vector<float> coins({ 0,5,1,2,10,6,2 });
	std::cout << coin_row_dynamic(coins) << std::endl;

	std::cout << coin_row_recursive(coins) << std::endl;

	/*std::vector<std::vector<Node>> graph({
		{Node(1,3),Node(4,5),Node(5,6)},//conected to node 0
		{Node(0,3),Node(5,4),Node(2,1)},//conected to node 1
		{Node(1,1),Node(5,4),Node(3,6)},//conected to node 2
		{Node(2,6),Node(5,5),Node(4,8)},//conected to node 3
		{Node(0,6),Node(5,2),Node(3,8)},//conected to node 4
		{Node(0,5),Node(1,4),Node(2,4),Node(3,5),Node(4,2)},//conected to node 5
		});


	std::vector<Edge> tree = primElogE(graph);

	for (Edge e : tree) {
		std::cout << "(" << e.from << "\t" << e.to << "\t cost: " << e.val << ")" << std::endl;
	}

	std::vector<std::vector<float>> graph({{0,3,0,0,6,5},
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

	printSequenceSequence(spanning_tree);*/


}


