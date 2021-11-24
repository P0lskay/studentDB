#pragma once
#include <map>
#include "Men.h"
class Student : public Men
{
private:
	int course = 1;
	int group = 1;
	bool stipendia = false;
	std::map <std::string, int> ex_grades;
	std::map <std::string, bool> tests;

public:
	int getCourse() { return this->course; }
	int getGroup() { return this->group; }
	bool getStipendia() { return this->stipendia; }
	auto getGrades() { return this->ex_grades; }
	auto getTests() { return this->tests; }
};

