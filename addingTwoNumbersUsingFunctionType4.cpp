// Adding two numbers using Function {Return type with arguement}
//Done by Shahil Dhakal
//NCIT
//BESE-Morning 2nd sem 

#include <iostream>
using namespace std;
int add(int, int);
int main()
{
    int n1,n2,result;
    cout<<"Input any two numbers: "<<endl;
    cin>>n1>>n2;
    result = add(n1,n2);
    cout<<"Sum: "<<result<<endl;
    return 0;
}
int add(int x, int y)
{
    return (x+y);
}