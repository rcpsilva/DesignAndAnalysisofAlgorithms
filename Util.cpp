#include <iostream>

template<class Iterable> 
void printSequence(Iterable& I) {

	for (auto e : I) {
		std::cout << e << "  ";
	}
	std::cout << std::endl;

}

template<class Iterable> void printSequenceSequence(Iterable& I) {

	for (auto r : I) {
		for (auto e : r) {
			std::cout << e << "  ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}
