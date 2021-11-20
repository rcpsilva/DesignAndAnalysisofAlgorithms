#include <vector>
#include <algorithm>
#include "CoinRow.h"

float coin_row_dynamic(const std::vector<float>& coins) {

	std::vector<float> f(coins.size(), 0);
	f[1] = coins[1];

	for (size_t i = 2; i < f.size(); i++)
	{
		f[i] = std::max(coins[i] + f[i-2],f[i-1]);
	}


	return f.back();
}


float coin_row_recursive(const std::vector<float>& coins, int i) {

	if (i == 0) {
		return 0;
	}
	else if (i == 1){
		return coins[1];
	}
	else {
		return std::max(coins[i] + coin_row_recursive(coins, i - 2),
			coin_row_recursive(coins, i - 1));
	}
}

float coin_row_recursive(const std::vector<float>& coins) {
	return coin_row_recursive(coins, coins.size()-1);
}