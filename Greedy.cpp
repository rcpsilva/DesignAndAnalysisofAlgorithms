#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <iterator>
#include <cstdio>
#include "Greedy.h"


// node = {indx, cost, source}

class compNode {
public:

	bool operator()(const std::vector<int>& n1, const std::vector<int>& n2) {
		return (n1[1] < n2[1]);
	}
};


bool minNode(const std::vector<int>& n1, const std::vector<int>& n2) {
	return (n1[1] < n2[1]);
}


std::vector<int> setDiff(const std::vector<int>& v1, const std::vector<int>& v2) {

	std::vector<int> diff;

	std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),
		std::inserter(diff, diff.begin()));

	return diff;

}

void dijkistra(std::vector<std::vector<int>> G, int s) {

	std::priority_queue< std::vector<int>, std::vector<std::vector<int>>, compNode > pq;
	std::vector<int> dists(G.size(), INT_MAX);
	std::vector<int> sources(G.size(), -1);


	dists[s] = 0;
	pq.push(std::vector<int> {s, dists[s], -1});
	

	while (!pq.empty()) {
		int u = pq.top()[0];
		pq.pop();

		for (int v = 0; v < G.size(); v++)
		{
			if (G[u][v] > 0) {
				if (dists[v] > dists[u] + G[u][v]) {
					dists[v] = dists[u] + G[u][v];
					sources[v] = u;
					pq.push(std::vector<int> {v, dists[v], u});
				}
			}
		}
	}

	printf("Vertex Distance from Source\n");
	for (int i = 0; i < G.size(); ++i)
		printf("%d \t %d \t %d \n", i, dists[i], sources[i]);

}