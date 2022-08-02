//Inheretence programs
//Done by Shahil Dhakal- BESE NCIT
//MultiLevel Inheretence
#include <iostream>
using namespace std;
class Parent
{
	public:
		void func1()
		{
			cout<<"Function of the first class is called."<<endl;
		}
};

class Child:public Parent
{
	public:
		void func2()
		{
			cout<<"Function of the second class is called."<<endl;
		}
};

class GrandChild:public Child
{
	public:
};

int main()
{
	GrandChild obj;
	obj.func1();
	obj.func2();
	return 0;
}

//When derived class inheretes the features of base class, it inheretes only public and protected members. It cannot inheretes private member as those are not accessible.
