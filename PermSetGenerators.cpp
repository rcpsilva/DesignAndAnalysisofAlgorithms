#include <vector>
#include <list>
#include <algorithm>
#include "Util.h"
#include "PermSetGenerators.h"


void permgen(int n) {

	std::list<int> start({});
	std::list<std::list<int>> frontier({ start });

	while (!frontier.empty()) {

		std::list<int> path(frontier.back());
		frontier.pop_back();

		if (path.size() == n) {
			printSequence(path);
		}
		else {
			std::vector<int> todo({});

			for (int i = n-1; i >= 0; i--)
			{
				bool contains = (std::find(path.begin(), path.end(), i) != path.end());
				if (!contains) {
					todo.push_back(i);
				}

			}

			for (auto e : todo) {
				std::list<int> new_path(path);
				new_path.push_back(e);
				frontier.push_back(new_path);
			}
		}

	}
	
}

void binsetgen(int n) {

	std::list<int> start({});
	std::list<std::list<int>> frontier({ start });

	while (!frontier.empty()) {

		std::list<int> path(frontier.back());
		frontier.pop_back();

		if (path.size() == n) {
			printSequence(path);
		}
		else {
			std::vector<int> todo({1,0});

			for (auto e : todo) {
				std::list<int> new_path(path);
				new_path.push_back(e);
				frontier.push_back(new_path);
			}
		}

	}


}

void subsetgen(int n) {

	std::vector<int> start({});
	std::list<std::vector<int>> frontier({ start });

	while (!frontier.empty()) {

		std::vector<int> path(frontier.back());
		frontier.pop_back();

		if (path.size() == n) {
			for (size_t i = 0; i < path.size(); i++)
			{
				if (path[i]) {
					std::cout << i << " ";
				}
			}
			std::cout << std::endl;

		}
		else {
			std::vector<int> todo({ 1,0 });

			for (auto e : todo) {
				std::vector<int> new_path(path);
				new_path.push_back(e);
				frontier.push_back(new_path);
			}
		}

	}
	

}