#include <vector>
#include <algorithm>
#include <concepts>
#include <compare>
#include <set>
#include <functional>
#include <stack>
#include <list>
#include <iterator>

template<typename T>
concept can_compare = requires(T a, T b) { a < b; };

template <typename T> void selection_sort(std::vector<T>& v) requires can_compare<T>
{
	int min;

	for (int i = 0; i < v.size(); i++) {
		min = i;
		for (int j = i + 1; j < v.size(); j++) {
			if (v[j] < v[min]) {
				min = j;
			}
		}
		std::swap(v[i], v[min]);
	}

}

template<class It, class C> void selection_sort(It first, It last, C comparator) {

	for (auto it = first; it != last; ++it) {
		iter_swap(it, std::min_element(it, last, comparator));
	}
}

template<class It> void selection_sort(It first, It last) {

	selection_sort(first, last, std::less<std::decay_t<decltype(*first)>>());
}

template <typename T> void bubble_sort(std::vector<T>& v) requires can_compare<T>
{

	for (int i = 0; i < v.size()-1; i++) {
		for (int j = 0; j < v.size()-1-i; j++) {
			if (v[j] > v[j+1]) {
				std::swap(v[j], v[j+1]);
			}
		}
	}

}

template<class It, class C> void bubble_sort(It first, It last, C comparator) {

	for (auto it = first; it != std::prev(last); ++it) {
		for (auto it2 = first; it2 != std::prev(last); ++it2) {
			iter_swap(it2, std::min_element(it2, std::next(it2,2), comparator));
		}
	}
}

template<class It> void bubble_sort(It first, It last) {

	bubble_sort(first, last, std::less<std::decay_t<decltype(*first)>>());
}


