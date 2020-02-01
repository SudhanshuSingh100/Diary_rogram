#include<iostream>
#include<cmath>
using namespace std;
/*sum= 1 + (1/2)^2 + (1/3)^3  +    ...............*/
int main()
{
	float n=38,i;
	float sum=0;
	for(i=1;i<=n;i++)
	{   float x;
	    x=(1/i);
	    sum += pow(x,i);
	    
	}
	cout<<"Sum of the series :  "<<sum;
}
