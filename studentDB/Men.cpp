#include "Men.h"
std::string Men::getName() { return this->name; }
std::string Men::getSex() { return this->sex; }
int Men::getAge() { return this->age; }


void Men::setName(std::string name) { this->name = name; }
void Men::setSex(std::string sex) { this->sex = sex; }
void Men::setAge(int age) { this->age = age; }