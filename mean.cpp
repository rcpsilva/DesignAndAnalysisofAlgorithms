#include <vector>
#include <cmath>
#include <cstdio>
#include "mean.h"


float mean(std::vector<float>& v) {

	float sum = 0;

	for (size_t i = 0; i < v.size(); i++)
	{
		sum += v[i];
	}

	return sum / v.size();

}

// sum_{ i = 0 } ^ {n} 1 = O(n)

float dec_mean(std::vector<float>& v, int begin, int end) {

	if ((end - begin) == 1) {
		return v[begin];
	}
	else {
		return (v[begin] + dec_mean(v, begin + 1, end)*(end - begin - 1))/(end-begin);
	}

}

// T(n) = T(n-1) + 1, T(1) = 1

float div_mean(std::vector<float>& v, int begin, int end) {

	if ((end - begin) == 1) {
		return v[begin];
	}
	else {
		return (div_mean(v, begin , (end+begin)/2)*((end + begin) / 2 - begin) +
			   div_mean(v, (end + begin) / 2, end) * (end - ((end + begin) / 2)))
				/ (end - begin);
	}

}

// T(n) = 2T(n/2) + 1, T(1) = 1

float div_mean(std::vector<std::vector<float>>& M, int b_row, int e_row, int b_col, int e_col) {

	printf("[%d , %d] [%d , %d]\n", b_row, e_row, b_col, e_col);

	if ((e_row - b_row == 1) && (e_col - b_col == 1)) {
		return M[b_row][b_col];
	}else {

		int cut_rows = std::ceil((b_row + e_row) / 2);
		int cut_cols = std::ceil((b_col + e_col) / 2);

		float sum_1 = div_mean(M, b_row, cut_rows, b_col, cut_cols) * ((cut_rows- b_row) * (cut_cols - b_col));
		float sum_2 = div_mean(M, b_row, cut_rows, cut_cols, e_col) * ((cut_rows - b_row) * (cut_cols - b_col));
		float sum_3 = div_mean(M, cut_rows, e_row, b_col, cut_cols) * ((e_row - cut_rows) * (cut_cols - b_col));
		float sum_4 = div_mean(M, cut_rows, e_row, cut_cols, e_col) * ((e_row - cut_rows) * (e_col - cut_cols));

		return (sum_1 + sum_2 + sum_3 + sum_4) / ((e_row - b_row) * (e_col - b_col));

	}
	
}

float div_mean(std::vector<std::vector<float>>& M) {

	return div_mean(M, 0, M.size(), 0, M[0].size());
}

float dim_mean(std::vector<std::vector<float>>& M, int row, float res) {

	if (row == M.size()) {
		return res/(M.size()*M[0].size());
	}
	else {
		float sum_row = 0;

		for (float e : M[row]) {
			sum_row += e;
		}

		return dim_mean(M, row + 1, res + sum_row);
	}
}

float dim_mean(std::vector<std::vector<float>>& M) {

	return dim_mean(M, 0, 0);
}


float dim_mean2(std::vector<std::vector<float>>& M, int row, int col, float res) {

	if (row == M.size()-1 && col == M[0].size()-1) {
		return (res + M[row][col])/(M.size() * M[0].size());
	}
	else {

		if (col < M[0].size() - 1) {
			return dim_mean2(M, row, col + 1, res + M[row][col]);
		}
		else if (row < M.size() - 1 ) {
			return dim_mean2(M, row + 1, 0, res + M[row][col]);
		}
		
	}
}

float dim_mean2(std::vector<std::vector<float>>& M) {

	return dim_mean2(M, 0, 0, 0);
}


float divMean(std::vector<std::vector<float>>& M, int bl, int el, int bc, int ec) {

	if ((ec - bc == 1) && (el - bl == 1)) {
		return M[bl][bc];
	}
	else {
		int cl = std::ceil((bl + el) / 2);
		int cc = std::ceil((bc + ec) / 2);


		float sum = divMean(M, bl, cl, bc, cc) * (cl - bl) * (cc - bc);
		sum += divMean(M, bl, cl, cc, ec) * (cl - bl) * (ec - cc);
		sum += divMean(M, cl, el, bc, cc) * (el - cl) * (cc - bc);
		sum += divMean(M, cl, el, cc, ec) * (el - cl) * (ec - cc);

		return sum / ((el - bl) * (ec - bc));


	}

}

float basicaoMean(std::vector<std::vector<float>>& M) {

	float mean = 0;

	for (auto l : M) {
		for (auto e : l) {
			mean += e / (M[0].size() * M.size());
		}
	}

	return mean;

}

float dimMean(std::vector<std::vector<float>>& M, int i, int j, float res) {

	if (i == M.size()-1 && j == M[0].size()-1) {
		return (M[i][j] + res) / (M[0].size()* M.size());
	}
	else {
		if (j < M[0].size() - 1) {
			return dimMean(M, i, j + 1, res + M[i][j]);
		}
		else if (i < M.size() - 1) {
			return dimMean(M, i + 1, 0, res + M[i][j]);
		}
	}
}

float dimMean(std::vector<std::vector<float>>& M) {
	return dimMean(M, 0, 0, 0);
}