#include <vector>
#include <cmath>

template <typename T>
bool find_key(std::vector<std::vector<T>>& M, T key) {

	for (size_t i = 0; i < M.size(); i++)
	{
		for (size_t j = 0; j < M[i].size(); j++)
		{
			if (M[i][j] == key) {
				return true;
			}
		}
	}

	return false;

}


template <typename T>
bool find_key2(std::vector<std::vector<T>>& M, T key) {

	for (auto row : M){
		for (T element : row) {
			if (element == key) {
				return true;
			}
		}
	}

	return false;
}

template <typename T>
bool find_keyDC(std::vector<std::vector<T>>& M, int key, int begin_r, int end_r, 
	int begin_c, int end_c) {


	if (end_r - begin_r == 0 && end_c - begin_c == 0) {
		if (M[begin_r][begin_c] == key) {
			return true;
		}
		return false;
	}

	int cut_r = ((end_r + begin_r) / 2);
	int cut_c = ((end_c + begin_c) / 2);


	bool q1 = find_keyDC(M, key, begin_r, cut_r, begin_c, cut_c);
	bool q2 = find_keyDC(M, key, begin_r, cut_r, cut_c, end_c);
	bool q3 = find_keyDC(M, key, cut_r, end_r, begin_c, cut_c);
	bool q4 = find_keyDC(M, key, cut_r, end_r, cut_c, end_c);

	return q1 || q2 || q3 || q4;
}

template <typename T>
bool find_keyDC(std::vector<std::vector<T>>& M, T key) {
	return find_keyDC(M, key, 0, M.size(), 0, M[0].size());
}