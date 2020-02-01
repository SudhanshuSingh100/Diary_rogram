#include<iostream>
using namespace std;
int checkPrime(int x)
{
	bool flag=true;
	for(int i=2; i<=x/2; i++)
	{
		if(x%i==0)
		{
			flag =false;
			break;
		}
	}
	return flag;
}

int main()
{
	int n;
	bool flag;
	cout<<"Enter the number: ";
	cin>>n;
	flag= checkPrime(n);
	if(flag)
		cout<<"Yes,Prime ha ye.";
	else 
		cout<<"Not a prime number."	;
	return 0;	
	
	
}
