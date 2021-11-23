#include <vector>
#include <algorithm>
#include "CoinRow.h"

int coin_row_dynamic(std::vector<int>& coins) {

	std::vector<int> F(coins.size(), -1);
	F[0] = 0;
	F[1] = coins[1];

	for (int i = 2; i < F.size(); i++)
	{
		F[i] = std::max(F[i - 1], coins[i] + F[i - 2]);
	}

	return F.back();
}

int coin_row_recursive(std::vector<int>& coins, int n) {

	if (n == 0) {
		return 0;
	}else if(n == 1) {
		return coins[1];
	}
	else {
		return std::max(coin_row_recursive(coins, n - 1), coins[n] + coin_row_recursive(coins, n - 2));
	}

}

int coin_row_recursive(std::vector<int>& coins) {
	return coin_row_recursive(coins, coins.size()-1);
}

