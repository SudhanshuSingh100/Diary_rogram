//Multiply with the minimum Adjacent
//The program must replace each element in the array by the product of the current element and the minimum of it's adjacent elements.
//finally program must print the modified array as the output(first and last element have onlyone element adjacent to them.
//  boundary condition : 2<= N <= 100
//Input :       6  
//ARRAY        7 6 4 5 9 3
//output :  42 24 20 20 27 27

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Input : "; cin>>n;
	int a[n]={0};
	for(i=0;i<n;i++)
	    cin>>a[i];
	for(i=0;i<n;i++)
	{   
	   if(i==0)
	   		cout<<a[i]*a[i+1]<<" ";
	   else if(i==n-1)
	   		cout<<a[i]*a[i-1]<<" ";   
	   else
		{
			if(a[i-1]<a[i+1])
			    cout<<a[i]*a[i-1]<<" ";
			else 
			    cout<<a[i]*a[i+1]<<" " ;   
		}	    
	}

	return 0;
}
