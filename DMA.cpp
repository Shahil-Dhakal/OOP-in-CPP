//Wap to input an array and display it using DMA.
//Done by Shahil Dhakal
//BESE NCIT 2nd sem
cl
#include <iostream>

using namespace std;

int main()
{
	int* ptr,i,sum=0;
	ptr = new int[4];
	for(i=0;i<4;i++)
	{
		cin>>*(ptr+i);
		sum += *(ptr + i);
	}
	cout<<"Entered Number are: "<<endl;
	for(i=0;i<4;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
	delete[] ptr;
	ptr = NULL;
	cout<<sum;
	return 0;
}
