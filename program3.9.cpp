#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,sum=0,x[10];
	float avg;
	for(int i=0;i<=n;i++)
	{
		cin>>x[i];
		sum += x[i] ;	
	}
	avg=sum/n;
	float vari;
	for(int j=0;j<=n;j++)
	{ 
	 
	  vari += pow((x[j] - avg),2);
	}
	float Variance;
	Variance = vari/n;
	cout<<"Variance : "<<Variance;
	return 0;
}
