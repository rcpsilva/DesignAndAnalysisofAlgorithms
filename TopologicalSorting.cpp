#include <list>
#include <vector>
#include "TopologicalSorting.h"

std::list<int> topological_sorting(std::vector<std::vector<int>> G) {

	std::list<int> sorted_nodes({});
	std::list<int> nodes({});

	for (int i = 0; i < G.size(); i++)
	{
		nodes.push_back(i);
	}

	// Find source
	while (!nodes.empty()) {
		
		bool is_source = true;

		for (int e : nodes)
		{
			is_source = true;

			for (int r : nodes)
			{
				if (G[r][e] != 0) {
					is_source = false;
					break;
				}
			}

			if (is_source) {
				sorted_nodes.push_back(e);
				nodes.remove(e);
				break;
			}
		}

		if (!is_source) {
			return std::list<int>({});
		}

	}

	return sorted_nodes;

}