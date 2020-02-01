#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Total Element: ";cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i==6)
			continue;
		cout<<i<<" ";	
	}
	cout<<"\n\n\n";
	for(i=1;i<=n;i++)
	{
		if(i==6)
			break;
		cout<<i<<" ";	
	}
	return 0;
}
