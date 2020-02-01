#include<iostream>
using namespace std;

long fact(int x)
{
	if(x==1|| x==0)
	   return 1;
	else 
	   return (x*fact(x-1));   
}
int main()
 {  
    int n;
    cout<<"Press 0 for exit,otherwise another number.";
 	cout<<"\nEnter the factorial number to be find: "; cin>>n;
	 while(n!=0)
	 {
	    cout<<" Result: "<<fact(n);
	    cout<<endl;
	 	cout<<"Enter the factorial number to be find: "; cin>>n;
	 }
 	return 0;
 }
