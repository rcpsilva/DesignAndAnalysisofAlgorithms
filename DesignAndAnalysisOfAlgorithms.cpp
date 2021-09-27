// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Util.h"
#include "Sorting.h"
#include "GraphSearch.h"
#include "PermSetGenerators.h"
#include "ConvexHull.h"
#include "TopologicalSorting.h"
#include "BinarySearchTree.cpp"
#include <vector>
#include <list>

int main()
{

    BinarySearchTree<int> bt;

    std::cout << (bt.insert(9) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (bt.insert(10) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (bt.insert(8) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (bt.insert(3) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (bt.insert(2) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (bt.insert(4) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (bt.insert(2) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;
    std::cout << (bt.insert(11) == InsertionInfo::Inserted ? "Inserted" : "AlreadyIn") << std::endl;


    bt.print();

    std::cout << std::endl;

    std::cout << (bt.search(7) == SearchInfo::Found ? "found" : "not found") << std::endl;
    std::cout << (bt.search(8) == SearchInfo::Found ? "found" : "not found") << std::endl;

}


