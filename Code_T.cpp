//code _ T

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || j==(n+1)/2 )
				cout<<"*";
			else
				cout<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
