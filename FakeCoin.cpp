#include "FakeCoin.h"
#include <cmath>


int weight(std::vector<int>& coins, int begin, int end) {

	int sum = 0;
	for (int i = begin; i < end; i++)
	{
		sum += coins[i];
	}
	return sum;
}

int findFakeCoin(std::vector<int>& coins, int begin, int end) {

	if (end - begin == 1) {
		return begin;
	}

	int size = std::ceil((float)(end - begin) / 3);

	int p1 = weight(coins, begin, begin + size);
	int p2 = weight(coins, begin + size, begin + 2*size);

	if (p1 == p2) {
		return findFakeCoin(coins, begin + 2 * size, end);
	}
	else if(p1 < p2) {
		return findFakeCoin(coins, begin, begin+size);
	}
	else {
		return findFakeCoin(coins, begin + size, begin+2*size);
	}
}

int findFakeCoin(std::vector<int>& coins) {
	return findFakeCoin(coins, 0, coins.size());
}