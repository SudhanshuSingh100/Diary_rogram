/*
	5
	45
	345
	2345
	12345

*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,x,f;
	cout<<"Input : ";
	cin>>n;
	x=n;
	for(i=1;i<=n;--x,i++)
	{   f=x;
		for(j=1;j<=i;j++)
		{
			cout<<f<<" ";
			f++;
		}
		cout<<endl;
	}
	return 0;
}

//task14 completed
