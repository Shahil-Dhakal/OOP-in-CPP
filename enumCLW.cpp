//Done by Shahil Dhakal
//NCIT
//BESE-Morning 2nd sem

#include <iostream>
using namespace std;
enum Months
{
    Jan,
    Feb=6,
    March,
    April=8,
    May,
    June
};
int main()
{
    Months m1,m2;
    m1=March;
    m2=June;
    cout<<"m1 = "<<m1<<endl<<"m2 = "<<m2<<endl;
    return 0;
}