#include <string>

class Men
{
	private:
		std::string name;
		std::string sex;
		int age;


	public:
		//Геттеры
		std::string getName() {return this->name;}
		std::string getSex() {return this->sex;}
		int getAge() {return this->age;}


		//Сеттеры
		void setName(std::string name) {this->name = name;}
		void setSex(std::string sex) {this->sex = sex;}
		void setAge(int age) {this->age = age;}
};

