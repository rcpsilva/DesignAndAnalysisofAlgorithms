// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Util.h"
#include "Sorting.h"
#include "GraphSearch.h"
#include <vector>
#include <list>

int main()
{
    std::vector<std::vector<int>> G({
        {1,2},
        {3,4},
        {5},
        {},
        {},
        {6,7},
        {8},
        {},
        {9},
        {} });
    
    std::list<int> pathdfs = dfs(0,G);

    printSequence(pathdfs);
}


