// Adding two numbers using Function {No return type with arguement}
//Done by Shahil Dhakal
//NCIT
//BESE-Morning 2nd sem

#include <iostream>
using namespace std;
void add(int, int);
int main()
{
    int n1,n2;
    cout<<"Input any two numbers: "<<endl;
    cin>>n1>>n2;
    add(n1,n2);
    return 0;
}
void add(int x, int y)
{
	int sum;
    sum=x+y;
    cout<<"Sum: "<<sum<<endl;
}
