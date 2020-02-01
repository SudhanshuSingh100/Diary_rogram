/*

A1111
0B111
00C11
000D1
0000E
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Input : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=n;j++)
	   {
	   	  if(i==j)
	   	  	cout<<char(i+64);
	   	  else if(i<j)
			 cout<<"1";
		  else if(i>j)
		  	cout<<"0";	 	
	   }
	   cout<<endl;	
	}
	return 0;
}
//task60 completed
