#include<iostream>
using namespace std;

int main()
{
   int n,i,j,x=1;	
   cout<<"Input : ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	 for(j=1;j<=i;j++)
   	 	cout<<x;
	x++;
	cout<<endl;
   }
   return 0;
}
// task12 completed
