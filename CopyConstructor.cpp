//Copy Constructor program
//Donr by Shahil Dhakal
//NCIT BESE morning-II sem

#include <iostream>

using namespace std;

class Constructor
{
	int a,b;
	public:
		Constructor()	//Default Constructor
		{
			cout<<"Default Constructor is called."<<endl;
		}
		
		Constructor(int x, int y)		//Defined parameterized constructor
		{
			a=x;
			b=y;
		}
		
		Constructor(Constructor &obj)
		{
		a=obj.a;
		b=obj.b;	
		}
		void display()
		{
			cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
		}
};

int main()
{
	Constructor c1;	//Default constructor is called
	Constructor c2(10,20); 	//Parameterized Constructor
	Constructor c3=c2; 		//Copy constructor. Can also be called as c3(c2);
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
