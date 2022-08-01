//Default Constructor program
//Donr by Shahil Dhakal
//NCIT BESE morning-II sem

#include <iostream>

using namespace std;

class Test
{
	int a;
	public:
		Test()
		{
			a=0;
		}
		void display()
		{
			cout<<"a = "<<a<<endl;
		}
};

int main()
{
	Test t1;
	t1.display();
	return 0;
}
