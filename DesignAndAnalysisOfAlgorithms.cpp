// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <queue>
#include <list>
#include <chrono>
#include <iostream>
#include <cstdio>
#include "Greedy.h"

int main() {

	std::vector<std::vector<int>> G =
		{{0,3,7,0,0}, 
		 {3,0,2,4,0}, 
		 {7,2,0,5,4}, 
		 {0,4,5,0,6},
		 {0,0,4,6,0}};

	dijkistra(G, 0);

}


