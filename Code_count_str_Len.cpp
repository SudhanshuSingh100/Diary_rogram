#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i,count=0;
	string str;
	cout<<"Interger Input : "; cin>>n;
	cout<<"\nString Input: "; cin>>str;
	while(n!=0)
	{
		
		count++;
		n=n/10;
	}
	int cstr=0;
	while(str[i]!='\0')
	{
		cstr++;
		i--;
	}
	cout<<"\nInteger Length : "<<count;
	cout<<"\nString Length : "<<cstr;
	return 0;
}
