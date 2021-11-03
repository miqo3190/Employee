#include "funcEmployee.h"

int main()
{
	Employee arr[3];
	for (int  i = 0; i < 3; i++)
	{
		arr[i].setName();
		arr[i].setAddress();
		arr[i].setYearOfJoining();
		arr[i].setSalary();
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i].getName()<<" ";
		std::cout<<arr[i].getAddress() << " ";
		std::cout<<arr[i].getYearOfJoining() << " ";
		std::cout<<arr[i].getSalary() << std::endl;
	}

}