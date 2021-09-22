#include <list>
#include <vector>
#include <algorithm>
#include "TopologicalSorting.h"

std::list<int> topologicalSorting(std::vector<std::vector<int>> G) {

	std::list<int> sorted_nodes({});
	std::list<int> nodes({});
	for (int i = 0; i < G.size(); i++)
	{
		nodes.push_back(i);
	}

	while (!nodes.empty()) {
		
		// Find source
		int source = -1;

		for (int i : nodes) {

			bool incoming = false;

			for (int j : nodes) {
				if (G[j][i] > 0) {
					incoming = true;
					break;
				}
			}

			if (!incoming) {
				source = i;
				break;
			}

		}

		if (source == -1) {
			return std::list<int>({});
		}

		// Add node to the list
		sorted_nodes.push_back(source);
		
		// Remove source
		nodes.remove(source);

	}


	return sorted_nodes;

}