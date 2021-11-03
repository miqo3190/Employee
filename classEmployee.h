#include <iostream>
#include <string>

class Employee
{
public:
	void setName();
	void setAddress();
	void setYearOfJoining();
	void setSalary();
	std::string getName();
	std::string getAddress();
	std::string getYearOfJoining();
	std::string getSalary();
private:
	std::string name;
	std::string address;
	std::string yearOfJoining;
	std::string salary;
};