#include <iostream>

template<class Iterable>
void printSequence(Iterable& seq) {
	for (auto e : seq) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

