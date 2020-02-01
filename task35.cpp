//1 2 3 4 3 2 1
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Input : "; cin>>n;
	for(i=1;i<n;i++)
		cout<<i<<" ";
	
	for(n--;i>=1;i--)
		cout<<i<<" ";
	return 0;	
}
//task35 completed
