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
#include <vector>
#include <list>
#include <chrono>

int main()
{

	auto start = std::chrono::system_clock::now();
	std::cout << fibonacci(45) << std::endl;
	auto end = std::chrono::system_clock::now();

	
	std::chrono::duration<double> seconds_as_double = end - start;
	std::cout << "fibonacci : " << seconds_as_double.count() << " seconds" << std::endl;

	start = std::chrono::system_clock::now();
	std::cout << fibonacci_tp(45) << std::endl;
	end = std::chrono::system_clock::now();

	seconds_as_double = end - start;
	std::cout << "fibonacci_td : " << seconds_as_double.count() << " seconds" << std::endl;

	start = std::chrono::system_clock::now();
	std::cout << fibonacci_bu(45) << std::endl;
	end = std::chrono::system_clock::now();

	seconds_as_double = end - start;
	std::cout << "fibonacci_bu : " << seconds_as_double.count() << " seconds" << std::endl;

}


