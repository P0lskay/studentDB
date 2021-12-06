

#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	Student test;
	Student* m = new Student("Андрей", "м", 19, 2, 2, { {"Диференицальные уравнения", 4} }, { {"Экономика", false}});
	

	std::string chois;
	std::string name;
	int age;
	std::string gender;

	std::cout << "Введите: \"студент\", если хотите добавить студента, либо введите: \"преподователь\", если хотите добавить преподователя, если хотите выйти из программы, то введите q и нажмите Enter: ";
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
			int group;
			int course;
			int ex_size;
			int test_size;

			std::cout << "Курс студента: ";
			std::cin >> course;
			std::cout << "Номер группы студента: ";
			std::cin >> group;
			
			std::cout << "Количество экзаменов: ";
			std::cin >> ex_size;
			std::map <std::string, int> ex_grades;
			for (int i = 0; i < ex_size; i++)
			{
				std::string lesson;
				int grade;
				std::cout << "Экзаминационный предмет: ";
				std::cin >> lesson;
				std::cout << "Оценка: ";
				std::cin >> grade;
				ex_grades[lesson] = grade;
			}
			std::cout << "Количество зачетов: ";
			std::cin >> test_size;
			std::map <std::string, bool> test_grades;
			for (int i = 0; i < test_size; i++)
			{
				std::string lesson;
				std::string res;
				std::cout << "Предмет: ";
				std::cin >> lesson;
				std::cout << "Введите Y, если предмет зачтен или N, если нет: ";
				std::cin >> res;
				if (res == "Y" || res == "Yes")
					test_grades[lesson] = true;
				else
					test_grades[lesson] = false;
			}

			Student* student = new Student(name, gender, age, course, group, ex_grades, test_grades);

		}
		else if (chois == "преподаватель")
		{
			std::string chair;
			std::string rank;
			std::string groups_string_format;
			std::vector <int> groups;

			std::cout << "Кафедра преподавателя: ";
			std::cin >> chair;
			std::cout << "Введите одно из званий преподавателя: \"Профессор\", \"Декан\", \"Заведующий кафедрой\", \"Доцент\", \"Cтарший преподаватель\", \"Младший научный сотрудник\"";
			std::cin >> rank;

			std::cout << "Группы, которые ведет преподаватель, через пробел: ";
			std::getline(std::cin, groups_string_format);
			int pointer = 0;
			std::string group_now = "";
			for (int i = 0; i < groups_string_format.length(); i++)
			{
				if (groups_string_format[i] == ' ')
				{
					group_now = groups_string_format.substr(pointer, i - 1);
					groups.push_back(std::stoi(group_now));
				}
				else if (i == groups_string_format.length()-1)
				{
					group_now = groups_string_format.substr(pointer, i);
					groups.push_back(std::stoi(group_now));
				}
			}

			Teacher* teacher = new Teacher(name, gender, age, chair, rank, groups);

		}
		else
		{
			std::cout << "Введено неверное значение" << std::endl;
		}


		

		std::cout << "Введите: \"студент\", если хотите добавить студента, либо введите: \"преподаватель\", если хотите добавить преподователя, если хотите выйти из программы, то введите q и нажмите Enter: ";
		std::cin >> chois;
	}


	
}


