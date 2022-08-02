//Principle of substitutability
//Done by Shahil Dhakal

#include <iostream>
using namespace std;
class A
{
	public:
		void func()
		{
			cout<<"Function of the first class."<<endl;
		}
};
class B:public A
{
	public:
		void func()
		{
			cout<<"Function of the second class."<<endl;
		}
};
void testFunc(A a)
{
	a.func();
}
void testing()
{
	B b;
	cout<<"Inside Testing."<<endl;
	testFunc(b);
}
int main()
{
	testing();
	return 0;
}
