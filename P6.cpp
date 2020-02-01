// Find the sum and average of the number stored in the array
#include<iostream>
using namespace std;

int sum(int x[])
{
	int s=0;
	for(int i=0;i<=12;i++)	
		s+=x[i];
	return s;
}

int main()
{
	int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	cout<<"Sum :"<<sum(a);
	int len=sizeof(a)/sizeof(a[0]);
	cout<<"\nAverage : "<<sum(a)/len;
	return 0;

}
