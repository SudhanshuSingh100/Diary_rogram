//given an array A of size N containing 0s,1s,and 2s,you need to sort the array in ascending order eg: 01202201 ------->  00011222
#include<iostream>
using namespace std;
int main()
{
  int i,n,zero=0,one=0,two=0;
  cout<<"Input : "; cin>>n;
  int a;
  
  for(i=1;i<=n;i++)
  { 
    cin>>a;
  	if(a==0)
  		++zero;
  	else if(a==1)
	  	++one;
	else if(a==2)
		++two;
			  	
  }	
  while(zero--) cout<<"0";
  while(one--) cout<<"1";
  while(two--) cout<<"2";	
  cout<<endl;
  return 0;	
}  
