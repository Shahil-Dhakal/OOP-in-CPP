//Shahil Dhakal
//BESE NCIT
//Passing object as an arguement
//Swapping two numbers.

#include<iostream>

using namespace std;

class Two;	//forward decleration
class One
{
	int n1;
	public:
		void read()
		{
			cout<<"Input a number : ";
			cin>>n1;
		}
		void display()
		{
			cout<<"The number is "<<n1<<"."<<endl;
		}
		friend void swap(One &,Two &);
};

class Two
{
	int n2;
	public:
		void read1()
		{
			cout<<"Input a number : ";
			cin>>n2;
		}
		void display1()
		{
			cout<<"The number is "<<n2<<"."<<endl;
		}
		friend void swap(One &,Two &);
};

int main()
{
	One obj1;
	Two obj2;
	obj1.read();
	obj2.read1();
	cout<<"Before Swapping : "<<endl;
	obj1.display();
	obj2.display1();
	swap(obj1, obj2);
	cout<<"After Swapping : "<<endl;
	obj1.display();
	obj2.display1();
	return 0;
}

void swap(One &a, Two &b)
{
	int temp;
	temp= a.n1;
	a.n1=b.n2;
	b.n2=temp;
}
