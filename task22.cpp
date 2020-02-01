#include<iostream>
using namespace std;
/*
10000
02000
00300
00040
00005

*/

int main()
{
	int n,i,j;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			   cout<<i;
			else
				cout<<"0";   
		}
		cout<<endl;
	}
	return 0;
}
//task22 completed
