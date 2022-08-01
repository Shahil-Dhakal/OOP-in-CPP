//Parameterized Constructor program
//Donr by Shahil Dhakal
//NCIT BESE morning-II sem

#include <iostream>

using namespace std;

class Test
{
	int a;
	int b;
	public:
	Test(int x, int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
};

int main()
{
	Test t1(20,30);
	t1.display();
	return 0;
}
