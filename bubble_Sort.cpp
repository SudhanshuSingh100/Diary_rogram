#include<iostream>
using namespace std;

void displayArray(int ar[],int len)
{
	int index=0;
	cout<<"the Sorted array is : ";
	for(int i=0;i<len;i++)
	{
		cout<<ar[i]<<" ";
	}
}

void bubble_sort(int ar[],int len)
{
   int outer_loop = 0;
   int inner_loop = 0;
   
   for(int outer_loop=0;outer_loop< len-1;outer_loop++)
   {
       for(int inner_loop=0;inner_loop<len - outer_loop-1; inner_loop ++)   	
   	   {  
   	         if(ar[inner_loop] > ar[inner_loop +1])
   	         {		
				int temp = ar[inner_loop];
				ar[inner_loop] = ar[inner_loop + 1];
					 ar[inner_loop + 1] = temp;
		     }
   	      
	   }
   }
	
}	

int main()
{
	int len=0;
	int ar[100];
	int i;
	cout<<"Enter length of array : ";
	cin>>len;
	
	cout<<"Enter the elements : ";
	for(i=0;i<len;i++)
	{
		cin>>ar[i];
	}
	bubble_sort(ar,len);
	displayArray(ar,len);
	return 0;
}
