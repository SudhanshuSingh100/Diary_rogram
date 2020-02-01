/*
  1
  22
  333
  4444
  333
  22
  1
*/
#include<iostream>
using namespace std;
int main()
{
   int n,i,j,k,l;
   cout<<"Input: ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
   	  for(j=1;j<=i;j++)
   	       cout<<i;
   	  cout<<endl;	
    }
    
   for(k=n-1;k>=1;k--)
   {  int x=k;
   	  for(l=n-1;l;--l)
   	     cout<<x;
   	  cout<<endl; 
	    
   }
   return 0;	
}

