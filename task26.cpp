/*
11111
11122
11333
14444
55555

*/
#include<iostream>
using namespace std;
/*
int main()
{
	int n ,i,j ,x=1;
	cout<<"Input: ";
	cin>>n;
	for(i=1;i<=n;i++)
     {  
     	for(j=1;j<n+1-i;j++)
     	{
     		cout<<"1";	
		}
	    
		for(j=1;j<=i;j++)
		{
		   cout<<x;	
		}
		x++;
		cout<<endl; 
	 }
	 return 0;
}*/
//task26 completed
int main()
{
	int n, i,j;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>n-i)
				cout<<i;
			else
				cout<<"1";	
		}
		cout<<endl;
	}
	return 0;
}
