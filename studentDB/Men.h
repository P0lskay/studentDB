#ifndef MEN_H_
#define MEN_H_
#include <string>

class Men
{
private:
	std::string name;
	std::string sex;
	int age;

public:
	//�������
	std::string getName();
	std::string getSex();
	int getAge();


	//�������
	void setName(std::string name);
	void setSex(std::string sex);
	void setAge(int age);
};
#endif

