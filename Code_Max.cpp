//largest among n numbers
#include<iostream>
using namespace std;
int main()
{
	int n,i,max=0;
	cout<<"Enter length : ";cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		  max=a[i];
	}
	cout<<"Maximum Number : "<<max;
	return 0;
}
