#include <GraphSearch.h>
#include <Util.h>

std::vector<int> get_neighbors(int node, std::vector<std::vector<int>> G) {
	return G[node];
}

bool is_goal(int node) {
	return (node == 4);
}

std::list<int> dfs(
	int s,
	std::vector<std::vector<int>> G) {

	std::list<int> start({ s });
	std::list<std::list<int>> frontier({ start });
	
	while (!frontier.empty()) {

		std::list<int> path(frontier.back());
		
		printSequenceSequence(frontier);
		
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

	return start;
}

std::list<int> bfs(
	int s,
	std::vector<std::vector<int>> G) {

	std::list<int> start({ s });
	std::list<std::list<int>> frontier({ start });

	while (!frontier.empty()) {

		std::list<int> path(frontier.back());

		printSequenceSequence(frontier);

		frontier.pop_back();

		if (is_goal(path.back())) {
			return path;
		}
		else {

			for (auto e : get_neighbors(path.back(), G)) {
				std::list<int> new_path(path);
				new_path.push_back(e);
				frontier.push_front(new_path);
			}

		}
	}

	return start;
}

std::list<int> todo(std::list<int>& l, std::list<int> to_do) {

	for (auto e : l) {
		to_do.remove(e);
	}

	return to_do;
}


void permutations(int n) {

	std::list<int> start({ });
	std::list<std::list<int>> frontier({ start });

	std::list<int> elements({});
	for (int i = 0; i < n; i++) {
		elements.push_back(i);
	}

	while (!frontier.empty()) {

		std::list<int> path(frontier.front());

		frontier.pop_front();

		if (path.size() == n) {
			printSequence(path);
		}
		else {

			for (auto e : todo(path, elements)) {
				std::list<int> new_path(path);
				new_path.push_back(e);
				frontier.push_back(new_path);
			}

		}
	}
}