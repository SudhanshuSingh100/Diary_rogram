#include<iostream>
using namespace std;
// @ # @ # @ # @ #   
int main()
{    
    int n,i,j;
    cout<<"Input : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    	if(i%2==0)
    	   cout<<"# ";
    	else
    		cout<<"@ ";	 	
	}
	 return 0;	 
}
