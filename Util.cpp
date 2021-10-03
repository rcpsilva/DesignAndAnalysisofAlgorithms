#include <iostream>
#include <vector>

template<class Iterable>
void printSequence(Iterable& seq) {
	for (auto e : seq) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

template<class Iterable>
void printSequenceSequence(Iterable& seq) {
	for (auto s : seq) {
		for (auto e : s) {
			std::cout << e << " ";
		}
		std::cout << " , " << std::endl;
	}
	std::cout << std::endl;
}

