// Adding Two Numbers Using Function (no return type with no arguement)
//Done by Shahil Dhakal
//NCIT
//BESE-Morning 2nd sem


#include <iostream>
using namespace std;
void add();     //FUNCTION DECLERATION
int main()
{
    add();      //FUNCTION CALL{No returntype-int,void,etc and No arguement ie(a,b)}
    return 0;
}
void add()      //FUNCTION DEFINITION
{
    int n1,n2,sum;
    cout<<"Input any two numbers: "<<endl;
    cin>>n1>>n2;
    sum = n1 + n2;
    cout <<"The sum is = "<<sum<<endl;
}