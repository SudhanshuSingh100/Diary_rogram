#include<iostream>
using namespace std;
//  * 4 * 16 * 32 *
int main()
{
	int n,i;
	cout<<"Input : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{  
	    if(i%2==1)
	   		cout<<"* ";
	   	else
		   cout<<i*i<<" ";	
		
	}
	return 0;
}
