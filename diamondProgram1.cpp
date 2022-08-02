//Ambiguity in Diamond Problem
//Done by Shahil Dhakal

#include <iostream>
using namespace std;

class University
{
	protected:
		char Uname[10];
		char Ulocation[10];
	public:
		void read()
		{
			cout<<"University Name: ";
			cin>>Uname;
			cout<<"University Location: ";
			cin>>Ulocation;
		}
		void display()
		{
			cout<<"University Name: "<<Uname<<endl<<"University Location: "<<Ulocation<<endl;
		}
};

class Affiliated:virtual public University
{
	protected:
		char Aname[10];
		char Aaddress[10];
	public:
		void read()
		{
			cout<<"Name of Affiliated College: ";
			cin>>Aname;
			cout<<"Affiliated College Location: ";
			cin>>Aaddress;
		}
		void display()
		{
			cout<<"Name of Affiliated College: "<<Aname<<endl<<"Affiliated College Location: "<<Aaddress<<endl;
		}
};

class Constituent:virtual public University
{
	protected:
		char schoolDean[10];
		char nameOfProgram[10];
	public:
		void read()
		{
			cout<<"Name of School's Dean': ";
			cin>>schoolDean;
			cout<<"Name of Program: ";
			cin>>nameOfProgram;
		}
		void display()
		{
			cout<<"Name of School's Dean': "<<schoolDean<<endl<<"Name of Program: "<<nameOfProgram<<endl;
		}
};

class Student:public Affiliated, public Constituent
{
	protected:
		char Sname[10];
		char program[10];
		int enrolledYear;
	public:
		void read()
		{
			University::read();
			Affiliated::read();
			Constituent::read();
			cout<<"Student Name: ";
			cin>>Sname;
			cout<<"Program: ";
			cin>>program;
			cout<<"Enrolled Year: ";
			cin>>enrolledYear;
		}
		void display()
		{
			University::display();
			Affiliated::display();
			Constituent::display();
			cout<<"Student's Name: "<<Sname<<endl<<"Program: "<<program<<endl<<"Enrolled Year: "<<enrolledYear<<endl;
		}
};

int main()
{
	Student S1;
	S1.read();
	S1.display();
	return 0;
}
