//Inheretence programs
//Done by Shahil Dhakal- BESE NCIT
//Multiple Inheretence
#include <iostream>
using namespace std;
class One
{
	public:
		void func1()
		{
			cout<<"Function of the first class is called."<<endl;
		}
};

class Two
{
	public:
		void func2()
		{
			cout<<"Function of the second class is called."<<endl;
		}
};

class Derived:public One,public Two
{
	public:
};

int main()
{
	Derived obj;
	obj.func1();
	obj.func2();
	return 0;
}

//When derived class inheretes the features of base class, it inheretes only public and protected members. It cannot inheretes private member as those are not accessible.
