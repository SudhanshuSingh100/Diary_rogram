/*
  1
  12
  123
  1234
  123
  12
  1
*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,i,j,t;
	cout<<"Input : "; cin>>n;
	for(int i=-n+1;i<=n;i++)
	{   t=n-abs(i); 
		for(j=1;j<=t;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
