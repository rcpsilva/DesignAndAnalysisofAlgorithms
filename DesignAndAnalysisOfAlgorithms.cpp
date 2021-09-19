// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Util.h"
#include "Sorting.h"
#include "GraphSearch.h"
#include "PermSetGenerators.h"
#include "ConvexHull.h"
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
    
    //std::list<int> pathdfs = dfs(0,G);

    //printSequence(pathdfs);

    //std::list<int> pathbfs = bfs(0, G);

    //printSequence(pathbfs);

    //permgen(6);

    //subsetgen(4);
    //std::vector<int> x({0,10,0,10,5,2,7,1});
    //std::vector<int> y({0,0,10,10,5,5,8,2});

    //std::vector<std::vector<int>> segments = get_convex_hull(x, y);

    //printSequenceSequence(segments);
}


