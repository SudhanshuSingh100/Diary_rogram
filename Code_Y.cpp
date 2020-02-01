//code _ Y

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
		   	if(n+1==i+j || i==j && i<=(n+1)/2  )
		   		cout<<"*";
		   	else
			   cout<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
//code _ Y  completed
