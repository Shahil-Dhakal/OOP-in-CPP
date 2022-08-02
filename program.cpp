//Inheretence programs
//Done by Shahil Dhakal- BESE NCIT
//Single Inheretence
#include <iostream>
using namespace std;
class One
{
	public:
		void func()
		{
			cout<<"The first class function is called."<<endl;
		}
};

class Two:public One{};

int main()
{
	Two obj;
	obj.func();
	return 0;
}

//When derived class inheretes the features of base class, it inheretes only public and protected members. It cannot inheretes private member as those are not accessible.
