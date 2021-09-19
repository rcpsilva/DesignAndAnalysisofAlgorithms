#include <list>
#include <vector>

#include "Util.h"
#include "GraphSearch.h" 

std::vector<int> get_neighbors(int node, std::vector<std::vector<int>> G) {
	return G[node];
}

bool is_goal(int node) {
	return (node == 4);
}

std::list<int> dfs(int s, std::vector<std::vector<int>> G) {

	std::list<int> start({ s });
	std::list<std::list<int>> frontier({ start });

	while (!frontier.empty()) {

		printSequenceSequence(frontier);

		std::list<int> path(frontier.back());
		frontier.pop_back();

		if (is_goal(path.back())) {
			return path;
		}
		else {
			for (auto e : get_neighbors(path.back(), G)) {
				std::list<int> new_path(path);
				new_path.push_back(e);
				frontier.push_back(new_path);
			}
		}

	}

}

std::list<int> bfs(int s, std::vector<std::vector<int>> G) {

	std::list<int> start({ s });
	std::list<std::list<int>> frontier({ start });

	while (!frontier.empty()) {

		printSequenceSequence(frontier);

		std::list<int> path(frontier.front());
		frontier.pop_front();

		if (is_goal(path.back())) {
			return path;
		}
		else {
			for (auto e : get_neighbors(path.back(), G)) {
				std::list<int> new_path(path);
				new_path.push_back(e);
				frontier.push_back(new_path);
			}
		}

	}

}