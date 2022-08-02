#include <iostream>
using namespace std;

class Person
{
	protected:
		char name[30];
		int age;
	public:
		void setPerson()
		{
			cout<<"Input Name: ";
			cin>>name;
			cout<<"Input age: ";
			cin>>age;
		}
		void displayPerson()
		{
			cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl;
		}
};

class Student:public Person
{
	protected:
		int roll;
	public:
		void setStudent()
		{
			setPerson();
			cout<<"Input roll: ";
			cin>>roll;
		}
		void displayStudent()
		{
			displayPerson();
			cout<<"Roll : "<<roll<<endl;
		}
};

class Employee:public Person
{
	protected:
		char designation[10];
		int id;
		int salary;
	public:
		void setEmployee()
		{
			setPerson();
			cout<<"Input designation: ";
			cin>>designation;
			cout<<"Enter id: ";
			cin>>id;
			cout<<"Input salary: ";
			cin>>salary;
		}
		void displayEmployee()
		{
			displayPerson();
			cout<<"Designation : "<<designation<<endl<<"ID : "<<id<<endl<<"Salary : "<<salary<<endl;
		}
};

class Examination:public Student
{
	protected:
		int practicalMarks;
		int theoryMarks;
	public:
		void setMarks()
		{
			setStudent();
			cout<<"Input total practical marks: ";
			cin>>practicalMarks;
			cout<<"Input total theory marks: ";
			cin>>theoryMarks;
		}
		void displayMarks()
		{
			displayStudent();
			cout<<"Practical Marks = "<<practicalMarks<<endl<<"Theory Marks = "<<theoryMarks<<endl;
		}
};

class Result:public Examination
{
	protected:
		int totalMarks;
	public:
		void displayTotal()
		{
			displayMarks();
			totalMarks=practicalMarks + theoryMarks;
			cout<<"Total Marks = "<<totalMarks;
		}
};

int main()
{
	Result obj;
	obj.setMarks();
	obj.displayTotal();
	cout<<endl<<"---------------------------------"<<endl<<"Employee Info: "<<endl;
	Employee obj2;
	obj2.setEmployee();
	obj2.displayEmployee();
	return 0;
}
