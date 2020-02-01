#include<iostream>
using namespace std;
// code for x
int main()
{
  int n,i,j;
  cout<<"Input : "; cin>>n;
  for(i=1;i<=n;i++)
  {  
  	for(j=1;j<=n;j++)
  	{
  		if( i==j || n+1 == i+j) 
  		  cout<<"*";
  		else
		  cout<<" ";  
	}
	cout<<endl;
  }
  return 0;	
}
