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
#include <vector>
#include <list>

int main()
{
	BinarySearchTree<int> bt;

	bt.insert(5);
	bt.insert(3);
	bt.insert(1);
	bt.insert(4);
	bt.insert(7);
	bt.insert(10);

	bt.preorder();
	std::cout << std::endl;

	bt.inorder();
	std::cout << std::endl;

	bt.postorder();
	std::cout << std::endl;
}


