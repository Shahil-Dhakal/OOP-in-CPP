//Shahil Dhakal
//BESE NCIT
//Passing object as an arguement
//member function of one class as friend function of naother

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
		void swap(Two &);
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
		friend void One::swap(Two &);
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
	obj1.swap(obj2);
	cout<<"After Swapping : "<<endl;
	obj1.display();
	obj2.display1();
	return 0;
}

void One:: swap(Two &b)
{
	int temp;
	temp= n1;
	n1=b.n2;
	b.n2=temp;
}
