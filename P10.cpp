//find all the factor of the number
#include<iostream>
using namespace std;
int main()
{
	int n,i=1,count=0;
	cout<<"Enter the Number to be determine factor :";
	cin>>n;
	while(i<=n)
	{
		if(n%i==0)
		{
			cout<<i<<",";
			count++;
		}
		i++;
	}
	cout<<"\nTotal number of factor: "<<count;
  return 0;	
}
