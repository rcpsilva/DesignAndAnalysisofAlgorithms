#pragma once

#include <vector>
#include <list>
#include <set>
#include <functional>
#include <algorithm>

std::list<int> dfs(int, std::vector<std::vector<int>>);

std::list<int> bfs(int, std::vector<std::vector<int>>);

void permutations(int);