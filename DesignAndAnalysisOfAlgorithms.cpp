// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Util.h"
#include "Sorting.h"
#include "GraphSearch.h"
#include "PermSetGenerators.h"
#include "ConvexHull.h"
#include "TopologicalSorting.h"
#include <vector>
#include <list>

int main()
{
    std::vector<std::vector<int>> G({
        {0,1,0,0,1},
        {0,0,0,0,0},
        {1,0,0,0,0}, 
        {1,0,0,0,0},
        {0,1,0,0,0}});

    std::list<int> sorted_nodes = topologicalSorting(G);

    printSequence(sorted_nodes);
    
}


