//write a program to print the elements in an array which are greater than all elements to its right.
//Input : 16 ,17,4,3,5,2
//output : 17,5,2

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Total Elements : ";
	cin>>n;
	int a[n]={0},out[n]={0};
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1,j=1;i<=n;i++)
	{
	    if(a[i] < a[i+1])
			out[j++]=a[i+1];	
	}	
	cout<<"Output : ";
	for(i=1;i<j;i++)
		cout<<out[i]<<" ";
	return 0;	
}
