//scan pair of integres and print seperate array
#include<iostream>
using namespace std;

int main()
{
	int i=-1,j,n,m,a[1000],b[1000];
	while(scanf("%d %d\n",&n,&m)==2)
	{
		i++;
		a[i]=n;
		b[i]=m;
	}
	cout<<"First array :";
	for(j=1;j<=i;j++)
	{
	   cout<<a[j]<<" ";	
	}
	cout<<"Second array :";
	for(j=1;j<=i;j++)
	{
		cout<<b[j]<<" ";
	}
	return 0;
  }  
