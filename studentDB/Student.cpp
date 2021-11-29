#pragma once
#include <map>
#include "Student.h"

std::vector <Student> Student::students_list = {};

Student::Student() {}
Student::Student(std::string name, std::string sex, int age, int course, int group, std::map <std::string, int> ex_grades, std::map <std::string, bool> tests)
{
	this->setName(name);
	this->setSex(sex);
	this->setAge(age);
	this->setCourse(course);
	this->setGroup(group);
	this->setGrades(ex_grades);
	this->setTests(tests);
	this->setStipendia();
	students_list.push_back(*this);
}

int Student::getCourse() { return this->course; }
int Student::getGroup() { return this->group; }
bool Student::getStipendia() { return this->stipendia; }
auto Student::getGrades() { return this->ex_grades; }
auto Student::getTests() { return this->tests; }
std::vector <Student> Student::getStudents() { return students_list; }

void Student::setCourse(int course) { this->course = course; }
void Student::setGroup(int group) { this->group = group; }
void Student::setGrades(std::map <std::string, int> ex_grades) { this->ex_grades = ex_grades; }
void Student::setTests(std::map <std::string, bool> tests) { this->tests = tests; }

void Student::setStipendia()
{
	for (auto grade : this->ex_grades)
	{
		if (grade.second < 4)
		{
			this->stipendia = false;
			break;
		}
	}

	for (auto test : this->tests)
	{
		if (test.second == false)
		{
			this->stipendia = false;
			break;
		}
	}
}

