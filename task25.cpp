/*
          *
         1 2
        * * *
       1 2 3 4
	  * * * * *  
*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{   int x=1;
		for(j=i;j<n;j++)
		{  
		   cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			if(i%2==1)
			    cout<<"* ";
			else
			   cout<<x<<" "; 
			   x++; 
		}
		cout<<endl;
	}
	return 0;
	
}
//task25 completed
