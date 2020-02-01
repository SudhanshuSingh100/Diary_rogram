/*
      A
     BAB
    CBABC
   DCBABCD
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		    cout<<" ";
		for(j=-i+1;j<i;j++)
		   cout<<char(abs(j)+65);
		cout<<endl;   
	}
	return 0;
}
