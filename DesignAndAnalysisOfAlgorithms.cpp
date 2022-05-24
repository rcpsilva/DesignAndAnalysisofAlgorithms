// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <queue>
#include <list>
#include <chrono>
#include "Util.h"
#include "PermSetGenerators.h"
#include "Sorting.h"
#include "Student.cpp"
#include "BinarySearchTree.cpp"
#include "FakeCoin.h"
#include "SearchMatrix.h"
#include "mean.h"


int main()
{
	
	std::vector<std::vector<float>> 
		M({ {1,17,1,1},
			{1,1,1,1}, 
			{1,17,1,1}, 
			{1,1,1,17}, });

	std::cout << dim_mean2(M) << std::endl;
}


