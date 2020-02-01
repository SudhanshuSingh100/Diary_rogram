#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"Enter the Five Number : "; cin>>a>>b>>c>>d>>e;
	cout<<"Before swapping : a    b     c    d     e ";
	cout<<"\n                 "<<a<<" "<<b<<"  "<<c<<"  "<<d<<"  "<<e;
	a=a+b+c+d+e;
	e=a - (b+c+d+e);
	d=a - (b+c+d+e);
	c=a - (b+c+d+e);
	b=a - (b+c+d+e);
	a=a - (b+c+d+e);
	cout<<"\nAfter swapping : a    b     c    d     e ";
	cout<<" \n                "<<a<<" "<<b<<"  "<<c<<"  "<<d<<"  "<<e;
	return 0;
}
