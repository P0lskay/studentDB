#include "Teacher.h"

std::vector <Teacher> Teacher::teachers_list = {};

Teacher::Teacher(){}
Teacher::Teacher(std::string name, std::string sex, int age, std::string chair, std::string rank, std::vector<int> groups)
{
	this->setName(name);
	this->setSex(sex);
	this->setAge(age);
	this->setChair(chair);
	this->setGroups(groups);
	this->setRank(rank);
	teachers_list.push_back(*this);
}

auto Teacher::getGroups() { return this->groups; }
auto Teacher::getChair() { return this->chair; }
auto Teacher::getRank() { return this->chair; }
auto Teacher::getTeachers() { return this->teachers_list; }
int Teacher::getSalary() { return this->salary; }

void Teacher::setGroups(std::vector <int> groups) { this->groups = groups; }
void Teacher::setChair(std::string chair) { this->chair = chair; }
void Teacher::setRank(std::string rank) { this->rank = rank; }

void Teacher::setSalary()
{
	if (this->rank == "Профессор")
		this->salary += 30000;
	else if (this->rank == "Декан")
		this->salary += 40000;
	else if (this->rank == "Заведующий кафедрой")
		this->salary += 25000;
	else if (this->rank == "Доцент")
		this->salary += 25000;
	else if (this->rank == "Cтарший преподаватель")
		this->salary += 20000;
	else if (this->rank == "Младший научный сотрудник")
		this->salary += 15000;
	this->salary += 300 * this->getGroups().size();
}

void Teacher::addGroup(int group)
{
	this->groups.push_back(group);
}