#pragma once
#ifndef TEACHER_H_
#define TEACHER_H_
#include "Men.h"
#include <vector>
#include <string>
class Teacher : public Men
{
private:
	std::string chair;
	std::string rank;
	std::vector <int> groups;
	static std::vector <Teacher> teachers_list;
	int salary = 0;

	//Определение зп для преподавателя
	void setSalary();

public:
	Teacher();
	Teacher(std::string name, std::string sex, int age, std::string chair, std::string rank, std::vector<int> groups);

	auto getGroups();
	auto getChair();
	auto getRank();
	int getSalary();
	auto getTeachers();

	void setGroups(std::vector <int> groups);
	void setChair(std::string chair);
	void setRank(std::string rank);

	void addGroup(int group);
};

#endif

