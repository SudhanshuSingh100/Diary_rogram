//Input : 6
//E D C B A
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Input : ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		cout<<char(i+64)<<" ";
	}
	return 0;
}
