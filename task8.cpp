
/* 
   ******
    *****
     ****
      ***
       **
        *
*/
#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cout<<"Input : ";cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(k=1;k<i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=n+1-i;j++)
		{
		   	cout<<"*";
		   	
		}
		cout<<endl;
		
	}
	return 0;
}

//task8 completed
