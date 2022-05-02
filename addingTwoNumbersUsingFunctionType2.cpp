// Adding Two Numbers Using Function {Return type with no arguement}
//Done by Shahil Dhakal
//NCIT
//BESE-Morning 2nd sem


#include <iostream>
using namespace std;
int add();
int main()
{
    int result;
    result = add();
    cout<<"Sum: "<<result<<endl;
    return 0;
}
int add()
{
    int n1,n2;
    cout<<"Input any two numbers: "<<endl;
    cin>>n1>>n2;
    return (n1+n2);
}