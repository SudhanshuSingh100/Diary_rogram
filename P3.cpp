//print series sum and series 1 + 2 + 3 + 4 + 5.....n

#include<iostream>
using namespace std;

int seriesSum(int n)
{
	if(n==1)
		return 1;
	else 
		return (n + seriesSum(n-1));	
}

int main()
{
	int x;
	
	cout<<"Enter the last term of series :";  cin>>x;
	cout<<" 0";
	for(int i=1;i<=x;i++)
	{  
	   cout<<" + "<<i;
	}
	cout<<" = "<<seriesSum(10);
	return 0;
} 
/*
int sum(int x)
{   
 	int	tot=0;
 	cout<<tot;
	for(int i=1;i<=x;i++)
	{
		tot=tot+i;
		cout<<" + "<<i;
	}
	cout<<" = "<<tot;
}
int main()
{
	int a;
	cout<<"Enter the last term of series : "; cin>>a;
	sum(a);
	return 0;
}


*/
