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


void dijkistra(std::vector<std::vector<int>> G, int s) {

	std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, compNode> pq;
	std::vector<int> dist(G.size(), INT_MAX);
	std::vector<int> source(G.size(), -1);

	dist[s] = 0;

	pq.push(std::vector<int> {0,0,-1});

	while (!pq.empty()) {

		int u = pq.top()[0];
		pq.pop();


		for (int i = 0; i < G.size(); i++)
		{
			if (G[u][i] != 0) {
				if (dist[i] > dist[u] + G[u][i]) {
					dist[i] = dist[u] + G[u][i];
					source[i] = u;
					pq.push(std::vector<int> {i, dist[i], u});
				}
			}
		}
	}

	printf("Vertex distance from Star\n");
	for (int i = 0; i < dist.size(); i++)
	{
		printf("%d \t %d \t %d \n", i, dist[i], source[i]);
	}

}