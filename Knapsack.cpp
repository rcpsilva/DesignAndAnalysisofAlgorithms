#include <vector>
#include <algorithm>
#include "Knapsack.h"

int mf_knapsack(int i, int j, std::vector<std::vector<int>> F, std::vector<int>& values, std::vector<int>& weights) {

	if (F[i][j] < 0) {
		if (j < weights[i-1]) {
			F[i][j] = mf_knapsack(i - 1, j, F, values, weights);
		}
		else {
			F[i][j] = std::max(mf_knapsack(i - 1, j, F, values, weights),
				values[i-1] + mf_knapsack(i-1, j - weights[i-1],F,values, weights));
		}
	
	}

	return F[i][j];
}

int mf_knapsack(std::vector<int>& values, std::vector<int>& weights, int capacity) {

	std::vector<std::vector<int>> F(weights.size() + 1, std::vector<int>(capacity + 1, -1));

	for (size_t i = 0; i < F.size(); i++)
	{
		F[i][0] = 0;
	}

	for (size_t i = 0; i < F[0].size(); i++)
	{
		F[0][i] = 0;
	}

	return mf_knapsack(F.size() - 1, F[0].size() - 1, F, values, weights);

}

int rec_knapsack(int i, int j, std::vector<int>& values, std::vector<int>& weights) {

	if (i == 0 || j == 0) {
		return 0;
	}
	else {

		if (j < weights[i - 1]) {
			return rec_knapsack(i - 1, j, values, weights);
		}
		else {
			return std::max(rec_knapsack(i - 1, j, values, weights),
				values[i - 1] + rec_knapsack(i - 1, j - weights[i - 1], values, weights));
		}
	}
	
}

int rec_knapsack(std::vector<int>& values, std::vector<int>& weights, int capacity) {

	return rec_knapsack(values.size(), capacity, values, weights);
}