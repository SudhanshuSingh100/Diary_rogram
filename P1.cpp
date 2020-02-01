//fibonacci series :  0 1 1 2 3 5 8 13 21 34 55 ........n
#include<iostream>
using namespace std;

int main()
{
	int a=0,b=1,c,n;
	cout<<"Enter the nth number of the series : ";
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<=n;i++)
	{   c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	
	return 0;
}
