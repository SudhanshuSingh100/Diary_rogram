//given an input integer,write code to replace all 0's to 5 in the integer
#include<iostream>
using namespace std;

int main()
{
	int n,rem=0,i=0,j,m=0;
	cout<<"Input : ";cin>>n;
	int a[15]={0};
	while(n!=0)
	{
		rem=n%10;
		m++;
		if(rem == 0)
		  {  rem= 5; }
		a[i]=rem;
		i++; 
		n=n/10;    
	}
	for(j=m;j>=0;--j)
	    cout<<a[j];
	
	return 0;
}
