#include<iostream>
using namespace std;
/* 
  *
  *#
  *#@
  *#@*
  *#@*#
  *#@*#@
  
*/
int main()
{
	int n,i,j;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%3==1)
				cout<<"* ";
			else if(j%3==2)
			   cout<<"# ";
			else
				cout<<"@ ";   
				
		}
	cout<<endl;
	}
	return 0;
}
