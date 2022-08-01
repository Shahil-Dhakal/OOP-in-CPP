//Done by Shahil Dhakal
//BESE NCIT 2nd sem

#include <iostream>

using namespace std;

class Student
{
	char name[20];
	int roll;
	int reg;
	public:
		void read()
		{
			cout<<"Enter name, roll and reg respectively: "<<endl;
			cin>>name>>roll>>reg;
		}
		void display()
		{
			cout<<name<<", "<<roll<<", "<<reg<<endl;
		}
};

int main()
{
	Student *S;
	S = new Student;
	(*S).read();
	(*S).display();
	delete S;
	S = NULL;
	return 0;
}
