
#include <vector>
#include "ChangeMaking.h"


int get_coins(int change, std::vector<int>& coins) {

	std::vector<int> f(change + 1);

	f[0] = 0;

	for (size_t i = 1; i < f.size(); i++)
	{
		int min_coins = std::numeric_limits<int>::max();

		for (size_t j = 0; j < coins.size(); j++)
		{
			if (i >= coins[j]) {
				int temp = f[i - coins[j]];
				if (temp < min_coins) {
					min_coins = temp;
				}
			}
		}

		f[i] = min_coins + 1;
	}


	return f.back();

}