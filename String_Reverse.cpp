#include<iostream>
using namespace std;
int reverse(int a[],int s,int e)
{
	while(s < e)
	{
		int temp =a[s];
		a[s]= a[e];
		a[e] = temp;
		s++;
		e--;
	}
	int n=6;
	cout<<"Reverse : ";
	for(int i=0;i<=n;i++)
		cout<<a[i];	
}
int main()
{
	int n;
	int a[]={3,2,1,5,7,8};
	n = sizeof(a)/sizeof(a[0]);
	
	reverse(a,a[0],a[n]);
	
	return 0;
}
