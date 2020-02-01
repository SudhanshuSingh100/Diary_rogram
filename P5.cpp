#include<iostream>
using namespace std;

int main()
{
	signed int x;	
			cout<<" Enter the number : ";
			cin>>x;
			if(x>=1)
			   cout<<"\nYour number is positive.";
			else if (x==0)
			   cout<<"\nYour number is neutral.";
			else if (x<0) 
			   cout<<"\nYour number is negative.";
			
	return 0;     
}
