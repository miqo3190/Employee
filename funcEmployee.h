#include "classEmployee.h"

void Employee::setName()
{
	std::cout << "Enter name : ";
	getline(std::cin, name);
	std::cout << std::endl;
}
void Employee::setAddress()
{
	std::cout << "Enter Address : ";
	getline(std::cin, address);
	std::cout << std::endl;
}
void Employee::setYearOfJoining()
{
	std::cout << "Enter year of joing : ";
	getline(std::cin , yearOfJoining);
	std::cout << std::endl;
}
void Employee::setSalary()
{
	std::cout << "Enter salary : ";
	getline(std::cin, salary);
	std::cout << std::endl;
}
std::string Employee::getName()
{
	return name;
}
std::string Employee::getAddress()
{
	return address;
}
std::string Employee::getYearOfJoining()
{
	return yearOfJoining;
}
std::string Employee::getSalary() 
{
	return salary;
}
