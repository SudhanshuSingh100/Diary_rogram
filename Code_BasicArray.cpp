#include<iostream>
using namespace std;
int main()
{
	int i,n,a[500];
	cout<<"Total Element : "; scanf("%d ",&n);
	for(i=1;i<=n;i++)
	    scanf("%d ",&a[i]);
	for(i=1;i<=n;i++)
		cout<<a[i]<<" " ;
	return 0;	   
	
}
