//seperate even-odd of  the array
#include<iostream>
using namespace std;
int main()
{
  int i,j=0,k=0,a[10];
  for(i=1;i<=10;i++)
     cin>>a[i];
  int even[5] ,odd[5],ev=0,od=0;
  for(i=1;i<=10;i++)
  {
  	if(a[i]>0)
  	{
  		if(a[i]%2 == 0)
  		{
  		   	even[j++] = a[i];
  		   	ev++;
		}
		else if(a[i]%2 == 1)
		{
			odd[k++] = a[i];
			od++;
		}
	}
  }  
	cout<<"Even list : ";
	for(j=0;j<ev;j++)
		{
			  cout<<even[j]<<" ";
			  
		}
	cout<<"\nOdd list : ";
	for(k=0;k<od;k++)
		{
			  
			  cout<<odd[k]<<" "; 
		}
   return 0;  
}
