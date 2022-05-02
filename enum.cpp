//Done by Shahil Dhakal
//NCIT
//BESE-Morning 2nd sem

#include <iostream>
using namespace std;
enum Days
{
    Sunday,
    Monday=5,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main()
{
    Days d1,d2;
    d1=Sunday;
    d2=Tuesday;
    cout<<"d1 = "<<d1<<endl<<"d2 = "<<d2<<endl;
    return 0;
    
}