// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <queue>
#include <list>
#include <chrono>
#include "Util.h"
#include "PermSetGenerators.h"
#include "Sorting.h"
#include "Student.cpp"


int main()
{
	//std::vector<Student> v({Student("C",1),Student("B",2),Student("A",3) });

	//selection_sort(v.begin(),v.end(),compStudentNames());

	std::list<float> v({ 3,2,4,9,10,7,5,8 });

	bubble_sort(v.begin(),v.end());

	printSequence(v);

}


