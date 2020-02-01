/*
  A B C D E
   B C D E
    C D E
     D E
      E
*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
			cout<<" ";
		
	    for(j=i;j<=n;j++)
	       cout<<char(j+64)<<" ";
	
		cout<<endl;
	}
	return 0;
}
//task59 completed
