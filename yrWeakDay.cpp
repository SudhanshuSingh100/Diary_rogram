#include<iostream>
using namespace std;
int main()
{
	int daynum,yr,weak,day;
	cout<<"enter no. of days : ";
	cin>>daynum;
	yr=daynum/365;
	weak= (daynum%365)/7;
	day = (daynum%365)%7;
	cout<<"\nyear : "<<yr;
	cout<<"\nWeak : "<<weak;
	cout<<"\nDay : "<<day;
	
	return 0;
}
