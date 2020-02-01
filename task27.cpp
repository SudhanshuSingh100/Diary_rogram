/*
   4321
   321
   21
   1
   1
   21
   321
   4321

*/
#include<iostream>
using namespace std;
int main()
{
	int n ,i,j;
	cout<<"Input : ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=i;j>0;j--)
		 	cout<<j;
		cout<<endl;
    }
	for(i=1;i<=n;i++)
	{			
		for(j=i;j>=1;j--)
			cout<<j;
		cout<<endl;	
	}	
	return 0;
}
