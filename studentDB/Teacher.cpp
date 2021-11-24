#include "Teacher.h"
auto Teacher::getGroups() { return this->groups; }
auto Teacher::getChair() { return this->chair; }
auto Teacher::getRank() { return this->chair; }
int Teacher::getSalary() { return this->salary; }

void Teacher::setGroups(std::vector <std::string> groups) { this->groups = groups; }
void Teacher::setSalary(int salary) { this->salary = salary; }
void Teacher::setChair(std::string chair) { this->chair = chair; }
void Teacher::setRank(std::string rank) { this->rank = rank; }