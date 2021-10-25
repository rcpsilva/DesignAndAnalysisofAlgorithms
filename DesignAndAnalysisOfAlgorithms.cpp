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
#include <vector>
#include <list>

int main()
{

	std::vector<float> v({ 4.5, 10 , 3, -2, -8, 15 });

	std::cout << mean(v) << std::endl;
	std::cout << dec_mean(v, 0, v.size()) << std::endl;
	std::cout << div_mean(v,0,v.size()) << std::endl;

	std::vector<float> mm = minmax(v);
	std::cout << mm[0] << ", " << mm[1] << std::endl;

	std::vector<float> dec_mm = dec_minmax(v);
	std::cout << dec_mm[0] << ", " << dec_mm[1] << std::endl;

	std::vector<float> div_mm = div_minmax(v);
	std::cout << div_mm[0] << ", " << div_mm[1] << std::endl;


}


