#include<iostream>
using namespace std;
int arrayConsecutiveDuplicate(int a[],int n)
{
  if(n==0 || n==1)
  	return n;
  int temp[n];
  int j=0;
  for(int i=0;i <n-1;i++)
  {
  	 if(a[i] != a[i+1])
  	  	temp[j++]=a[i];
  }	  	
  temp[j++]=a[n-1];
  for(int i=0;i<j ;i++)	
  {
  	a[i] = temp[i];
  }
  return j;
}

int main()
{
	int a[] = {1,2,2,3,5,5,4,6,6};
	int n = sizeof(a)/sizeof(a[0]);
	n= arrayConsecutiveDuplicate(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;	
	
}
