//print ascii character through integers
//(0-31)are not printing characters , but (32-127)are the printing characters,
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter range : \n"; cin>>a>>b;
	for(int i=a;i<=b;i++)
		cout<<char(i)<<" ";
	return 0;
}
