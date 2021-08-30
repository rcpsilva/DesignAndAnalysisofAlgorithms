#include <string>
#include <iostream>

class Student
{
public:
	std::string name;
	float grade;

	Student(std::string name, float grade) {
		this->name = name;
		this->grade = grade;
	}

	friend std::ostream& operator<<(std::ostream& os, const Student& st) {
		os << st.name << ": " << st.grade;
		return os;
	}

	bool operator < (const Student& st) const
	{
		return (grade < st.grade);
	}

	bool operator >(const Student& st) const
	{
		return (grade > st.grade);
	}
};

class compStudentNames {
public:

	bool operator()(Student& s1, Student& s2)
	{
		return (s1.name < s2.name);
	}
};