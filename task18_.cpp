#include<iostream>
using namespace std;
//   * # @ * # @ * # @
int main()
{
   	int n,i;
   	cout<<"Input : ";
   	cin>>n;
   	for(i=1;i<=n;i++)
   	{   if(i%3==1)
			cout<<"* ";
		else if(i%3==2)
		  cout<<"# ";
		else 
	    	cout<<"@ ";  	
	}
	return 0;
}
