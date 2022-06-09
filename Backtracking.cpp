#include <vector>
#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
#include "Util.h"
#include "Backtracking.h"

bool is_possible_hamilton(int node, std::vector<int>& path, std::vector<std::vector<int>>& graph) {
	if (path.size() == 0) {
		return true;
	}
	else {
		for (size_t i = 0; i < path.size(); i++)
		{
			if (node == path[i]) {
				return false;
			}
		}

		if (graph[path.back()][node] == 0) {
			return false;
		}

		if (path.size() == graph.size() - 1 && graph[node][path.front()] == 0) {
			return false;
		}
	}

	return true;
}

void solve_hamilton(std::vector<std::vector<int>>& graph, std::vector<int>& path) {

	if (path.size() == graph.size()) {
		printSequence(path);
	}
	else {
		for (int i = 0; i < graph.size(); i ++)
		{
			if (is_possible_hamilton(i, path, graph)) {
				path.push_back(i);
				solve_hamilton(graph, path);
				path.pop_back();
			}
		}
	}
}

void solve_hamilton(std::vector<std::vector<int>>& graph) {
	std::vector<int> path({0});
	solve_hamilton(graph, path);
}

bool is_possible_nqueen(std::vector<int>& queens, int col) {

	for (int i = 0; i < queens.size(); i++)
	{
		if (queens[i] == col) {
			return false;
		}
	}

	int row = queens.size();

	for (int i = 0; i < queens.size(); i++)
	{
		int d_col = std::abs(queens[i] - col);
		int d_row = std::abs(i - row);

		if (d_col == d_row) {
			return false;
		}

	}

	return true;

}

bool solve_nqueen(std::vector<int>& queens, int n) {

	if (queens.size() == n) {
		printSequence(queens);
		return true;
	}
	else {
		for (int i = 0; i < n; i++)
		{
			if (is_possible_nqueen(queens, i)) {
				queens.push_back(i);
				if (solve_nqueen(queens, n)) {
					return true;
				}
				queens.pop_back();
			}
		}
		return false;
	}

}

void solve_nqueen(int n) {

	std::vector<int> queens({});

	solve_nqueen(queens, n);

}

bool is_possible_sudoku(std::vector<std::vector<int>>& grid, int x, int y, int n) {

	for (int j = 0; j < grid.size(); j++)
	{
		if (grid[x][j] == n) {
			return false;
		}
	}

	for (int i = 0; i < grid.size(); i++)
	{
		if (grid[i][y] == n) {
			return false;
		}
	}

	int x0 = (x / 3) * 3;
	int y0 = (y / 3) * 3;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (grid[x0 + i][y0 + j] == n) {
				return false;
			}
		}
	}

	return true;

}

bool solve_sudoku(std::vector<std::vector<int>>& grid, int x, int y) {
	 
	if (x == grid.size()-1 && y == grid[0].size() - 1) {
		printSequenceSequence(grid);
		return true;
	}
	else {
		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid.size(); j++)
			{
				if (grid[i][j] == 0) {
					for (int k = 1; k <= grid.size(); k++)
					{
						if (is_possible_sudoku(grid,i,j,k)) {
							grid[i][j] = k;
							solve_sudoku(grid, i, j);
							grid[i][j] = 0;
						}
					}
					return false;
				}
			}
		}
	}
	return true;
}

bool solve_sudoku(std::vector<std::vector<int>>& grid) {

	return solve_sudoku(grid, 0, 0);
}


void nqueenbk(std::vector<int>& s, int n) {

}

void nqueenbk(int n) {

}