//Input : 7
//A b C d E f G
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Input: "; cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
			cout<<char(i+64)<<" ";
		else
			cout<<char(i+96)<<" ";	
	}
	return 0;
}
