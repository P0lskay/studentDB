#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_

#include <vector>
#include <map>
#include "Men.h"
class Student : public Men
{
private:
	int course = 1;
	int group = 1;
	bool stipendia = true;
	static std::vector <Student> students_list;
	std::map <std::string, int> ex_grades;
	std::map <std::string, bool> tests;

	//Получит ли студент стипендию
	void setStipendia();



public:
	Student();
	Student(std::string name, std::string sex, int age, int course, int group, std::map <std::string, int> ex_grades, std::map <std::string, bool> tests);

	int getCourse();
	int getGroup();
	bool getStipendia();
	auto getGrades();
	auto getTests();
	std::vector <Student> getStudents();

	void setCourse(int course);
	void setGroup(int group);
	void setGrades(std::map <std::string, int> ex_grades);
	void setTests(std::map <std::string, bool> tests);
};


#endif

