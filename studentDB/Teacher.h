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
	std::vector <std::string> groups;
	int salary;


public:
	auto getGroups();
	auto getChair();
	auto getRank();
	int getSalary();

	void setGroups(std::vector <std::string> groups);
	void setSalary(int salary);
	void setChair(std::string chair);
	void setRank(std::string rank);
};

#endif

