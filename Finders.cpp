#include "Finders.h"

int fmin(std::vector<int>& v, int begin, int end) {

	if ((end - begin) == 1) {
		return v[begin];
	}
	else {
		int min1 = fmin(v, begin, (begin + end) / 2);
		int min2 = fmin(v, (begin + end) / 2, end);

		return (min1 < min2) ? min1 : min2;
	}

}

int find_min(std::vector<int>& v) {
	return fmin(v, 0, v.size());
}


int fmindecconq(std::vector<int>& v, int begin, int end) {
	if ((end - begin) == 1) {
		return v[begin];
	}
	else {
		int min = fmindecconq(v, begin + 1, end);
		return v[begin] < min ? v[begin] : min;
	}

}

int find_min_decconq(std::vector<int>& v) {
	return fmindecconq(v, 0, v.size());
}
