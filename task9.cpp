/*
         *
        ***
       *****
      *******
     *********
*/


#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cout<<"Input : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	     for(j=1;j<n+1-i;j++)
		 {
		 	cout<<" ";
		 }	
		 for(k=1;k<=2*i+1;k++)
		 {
		    cout<<"*";	
		 }
		 cout<<endl;
	}
	return 0;
}
//task9 completed
