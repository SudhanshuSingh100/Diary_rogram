#include<iostream>
// 1 $ 3 $ 5 $ 7 $ 9
using namespace std;
int main()
{
	int n,i,x=1;
	cout<<"Input : "; cin>>n;
	for(i=1;i<=n;i++)
	{
	   	if(i%2==0)
	   		cout<<"$ ";
	   	else
		    cout<<x<<" ";
		x+=1;		
	}
	return 0;
}
