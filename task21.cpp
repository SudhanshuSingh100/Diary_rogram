#include<iostream>
/* 
   1
   10
   101
   1010
   10101

*/
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				cout<<"1";
			}
			else
			   cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}
