

#include <iostream>
#include "Student.h"

int main()
{
	Student* m = new Student("Andrew", "Male", 19, 2, 2, { {"Диференицальные уравнения", 4} }, { {"Экономика", false}});
	
	setlocale(LC_ALL, "Russian");

	std::string chois;
	std::string name;
	int age;
	int group;
	int course;
	std::string gender;

	std::cout << "Введите: \"студент\", если хотите добавить студента, либо введите: \"преподаватель\", если хотите добавить преподователя, если хотите выйти из программы, то введите q и нажмите Enter: ";
	std::cin >> chois;
	
	while (chois != "q")
	{
		std::cout << "Имя: ";
		std::cin >> name;
		std::cout << "Пол(муж/жен): ";
		std::cin >> gender;
		std::cout << "Возраст: ";
		std::cin >> age;

		if (chois == "студент")
		{
			std::cout << "Курс студента: ";
			std::cin >> course;
			std::cout << "Номер группы студента: ";
			std::cin >> group;

		}
		else if (chois == "преподаватель")
		{

		}
		else
		{

		}
	}
}


