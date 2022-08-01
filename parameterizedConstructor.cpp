//Parameterized Constructor program
//Donr by Shahil Dhakal
//NCIT BESE morning-II sem

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
	char name[20];
	int id;
	char address[20];
	public:
		Employee(char name1[20], int id1, char address1[20])
		{
			strcpy(name,name1);
			id = id1;
			strcpy(address,address1);
		}
		void display()
		{
			cout<<"name = "<<name<<endl<<"id = "<<id<<endl<<"Address = "<<address<<endl;
		}
};

int main()
{
	Employee e1("Ramesh",10,"Kathmandu");
	e1.display();
	return 0;
}
