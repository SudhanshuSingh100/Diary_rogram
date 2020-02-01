//check the number is fibonacci or not
#include<iostream>
#include<math.h>
using namespace std;
int isPerfectSquare(int x)
{
	int s=sqrt(x);
	if(s*s==x)
		return 1;
	else
		return 0;			
}

int isFibonacci(int n)
{
	if(isPerfectSquare(5*n*n+4) || isPerfectSquare(5*n*n-4))
		return 1;
	else
		return 0;	
}
//utility function 
int main()
{
	int n;
	cout<<"Input : "; cin>>n;
	if(isFibonacci(n))
	    cout<<n<<" is a fibonacci number.";
	else
	    cout<<n<<" is Not a fibonacci number.";    
	return 0;
	
}
