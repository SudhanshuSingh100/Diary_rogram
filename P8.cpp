#include<iostream>
using namespace std;
int swap(int x, int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"\nAfter Swapping : a= "<<x<<"   b= "<<y;
}
int main()
 {
 	int a,b;
 	cout<<"Enter the two number :\n" ;
 	cin>>a>>b;
 	cout<<"Before swapping : a= "<<a<<"   b= "<<b;
 	swap(a,b);
 	
 	return 0;
 }
