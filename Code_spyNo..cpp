//spy no.----sum and product are equal of individual integers itself
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum=0,prod=1,rem;
	cout<<" Integer Input : "; cin>>n;
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		prod*=rem;
		n=n/10;
	}
	if(sum==prod)
		cout<<"Spy number.";
	else
		cout<<"Not a Spy number";
	return 0;		
	
}
