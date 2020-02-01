#include<iostream>
using namespace std;
int arrSum(int n)
{
	int i,ar[n], sum=0,avg,ni=10;
	for(int i=1; i<=n ;i++)
	{
		cin>>ar[i];
		sum=sum+ar[i];
	}
	cout<<" Sum : "<<sum;
	avg = sum/ni;
	cout<<"Average : "<<avg;
	return 0; 
}

int main()
{
	int n;
	cout<<"Enter total number of element: ";
	cin>>n;
	arrSum(n);
	return 0;
}
