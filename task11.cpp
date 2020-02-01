#include<iostream>
using namespace std;

int main()
{
	int n,i,j,x;
	cout<<"Input : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{   x=1;
	   	for(j=1;j<=i;j++)
		   {
	   		 cout<<x;
	   		 x++;
		   }
		  cout<<endl; 
	}
	return 0;
}
