#include<iostream>
/*
	1
	21
	321
	4321
	54321
*/
using namespace std;
int main()
{
	int n ,i,j,x;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{  
	   for(j=i;j>=1;j--)
	   {
	   	    cout<<j;
	   }
	cout<<endl;
	}
	return 0;
}
