#include "Teacher.h"
auto Teacher::getGroups() { return this->groups; }
auto Teacher::getChair() { return this->chair; }
auto Teacher::getRank() { return this->chair; }
int Teacher::getSalary() { return this->salary; }

void Teacher::setGroups(std::vector <std::string> groups) { this->groups = groups; }
void Teacher::setChair(std::string chair) { this->chair = chair; }
void Teacher::setRank(std::string rank) { this->rank = rank; }

void Teacher::setSalary()
{
	if (this->rank == "���������")
		this->salary += 30000;
	else if (this->rank == "�����")
		this->salary += 40000;
	else if (this->rank == "���������� ��������")
		this->salary += 25000;
	else if (this->rank == "������")
		this->salary += 25000;
	else if (this->rank == "C������ �������������")
		this->salary += 20000;
	else if (this->rank == "������� ������� ���������")
		this->salary += 15000;
	this->salary += 300 * this->getGroups().size();
}