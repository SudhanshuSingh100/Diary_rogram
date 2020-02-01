// Input: 5
// A B C D E
#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Input: "; cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<char(i+64)<<" ";
	}
	return 0;
}
