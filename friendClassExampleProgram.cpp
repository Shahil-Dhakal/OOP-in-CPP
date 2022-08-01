#include <iostream>

using namespace std;

class A;
class B
{
	int b;
	public:
		void read(int x)
		{
			b=x;
		}
	friend class A;
};

class A
{
	public:
		void display(B obj)
		{
			obj.read(10);
			cout<<"The number is: "<<obj.b;
		}
};

int main()
{
	A a1;
	B b1;
	a1.display(b1);
	return 0;
}
