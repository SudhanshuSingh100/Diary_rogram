//To find first 2 maximum numbers in array
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,posi,max1,max2;
	cout<<"total element : "; cin>>n;
	cout<<"enter no.s : ";
	int a[n] ,temp[n-1] = {0};
	for(i=1;i<=n;i++)
		cin>>a[i];
	max1 = 0;
	posi = 0;
	for(i=1;i<=n;i++)  // loop for 1st maximum number
	{
	   if(a[i]>max1)
	   {
	   	  max1 = a[i];
	   	  posi = i;
	   }  	
	}
	
	for(j=1;j<n;j++)  // delete max1 element array
	{
		if(j < posi)
		    temp[j]=a[i];
	    else if(j >= posi)
		    temp[j] = a[i+1];   
	}
	
	max2 = temp[0];
	
	for(j=1;j<n;j++)    // find again 2nd maximum element
	{
		if(temp[i] > max2)
		{
			max2 = temp[i];
		}
		
	}
	cout<<"\nFirst maximum : "<<max1;
    cout<<"\nSecond maximum: "<<max2;
	return 0;
	
}
