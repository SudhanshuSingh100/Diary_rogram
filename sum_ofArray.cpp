#include<iostream>
using namespace std;
int main()
{
	int i,n ;
	cout<<"Enter total elements: "; cin>>n;
    signed int a[n] ,psum,nsum;
	cout<<"Enter element : \n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	for(i=0;i<n;i++)
	{
	    if(a[i] >= 0)
		 {
		    psum=0;
		 	psum += a[i];
		 	cout<<a[i]<<" ";
		 }	
		 
		if(a[i] < 0)
		{
			nsum= 0;
			nsum += a[i];
			cout<<a[i]<<" ";
		 } 
	}
   
	
	cout<<"Sum of array element : "<<(psum - nsum);
	return 0;	
	
}
