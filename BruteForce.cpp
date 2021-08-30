#include <vector>
#include <algorithm>
#include <concepts>
#include <compare>

template<typename T>
concept can_compare = requires(T t, T u) { t < u; };

template <typename T>
//requires std::totally_ordered<T>
void selection_sort(std::vector<T>& v) requires can_compare<T>
{
	int min;

	for (int i = 0; i < v.size() - 1; i++) {
		min = i;
		for (int j = i + 1; j < v.size(); j++) {
			if (v[j] < v[min]) {
				min = j;
			}
		}
		std::swap(v[i], v[min]);
	}

}

template <class It, class C> void selection_sort(It first, It last, C comparator)
{
	// std::vector<T>::iterator
	for (auto it = first; it != last; ++it)
	{
		iter_swap(it, std::min_element(it, last, comparator));
	}
}

template <class It> void selection_sort(It first, It last)
{
	selection_sort(first, last, std::less<std::decay_t<decltype(*first)>>());
}

template <typename T>
void bubble_sort(std::vector<T>& v) {
	for (size_t i = 0; i < v.size() - 1; i++)
	{
		for (size_t j = 0; j < v.size() - 1 - i; j++)
		{
			if (v[j] > v[j + 1]) {
				std::swap(v[j], v[j + 1]);
			}
		}
	}
}

template <class It, class C> void bubble_sort(It first, It last, C comparator)
{
	// std::vector<T>::iterator
	for (auto it = first; it != last - 1; ++it)
	{
		for (auto it2 = first; it2 != (last - (it - first) - 1); ++it2) {
			iter_swap(it2, std::min_element(it2, it2 + 2, comparator));
		}
	}
}

template <class It> void bubble_sort(It first, It last)
{
	bubble_sort(first, last, std::less<std::decay_t<decltype(*first)>>());
}