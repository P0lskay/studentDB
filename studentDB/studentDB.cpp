

#include <iostream>
#include "Student.h"

int main()
{
	Student* m = new Student("Andrew", "Male", 19, 2, 2, { {"Диференицальные уравнения", 4} }, { {"Экономика", false}});
	std::cout << m->getStipendia() << std::endl;
	std::vector <Student> studi = m->getStudents();

	for (auto student : studi)
	{
		std::cout << student.getName();
	}
}


