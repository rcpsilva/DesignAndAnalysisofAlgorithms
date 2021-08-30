// PCC104DesignAndAnalysisofAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Util.cpp>
#include <Student.cpp>
#include <BruteForce.cpp>
#include <vector>
#include <list>


int main()
{
    std::vector<Student> seq({});

    seq.push_back(Student("A", 9));
    seq.push_back(Student("B", 6));
    seq.push_back(Student("C", 10));
    seq.push_back(Student("D", 8));
    seq.push_back(Student("E", 7));

    printSequence(seq);

    //selection_sort(seq);

    //selection_sort(seq.begin(), seq.end());

    //selection_sort(seq.begin(), seq.end(), std::greater<Student>());

    //bubble_sort(seq);

    bubble_sort(seq.begin(), seq.end(), std::greater<Student>());

    printSequence(seq);

}

