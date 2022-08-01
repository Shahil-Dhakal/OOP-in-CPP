//WAP to add two complex numbers. Use constructor to initialize data members of complex numbers.
//Done by Shahil Dhakal
//BESE NCIT 2nd sem

#include <iostream>

using namespace std;

class Complex
{
	int real,imaginary;
	public:
		Complex(int x, int y)
		{
			real = x;
			imaginary = y;
			cout<<"The given complex number is: "<<real<<"+i"<<imaginary<<endl;
		}
		Complex(){}
		void add(Complex);
};

int main()
{
	int n1,n2;
	cout<<"Input real and imaginnary numbers for the first one ie. a+ib:"<<endl;
	cin>>n1>>n2;
	Complex c1(n1,n2);
	cout<<"Similarly, Input real and imaginnary numbers for the Second one ie. a+ib:"<<endl;
	cin>>n1>>n2;
	Complex c2(n1,n2);
	Complex c3;
	c1.add(c2);
	return 0;
}

void Complex::add(Complex c2)
{
	int real1 = real + c2.real;
	int imaginary1 = imaginary +c2.imaginary;
	cout<<"The addition of the given complex number is: "<<real1<<"+i"<<imaginary1<<endl;
 } 
