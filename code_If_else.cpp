//nested if else statement
#include<iostream>
using namespace std;
int main()
{
	char g;
	int age;
	cout<<"Gender : ";cin>>g;
	cout<<"Age : "; cin>>age;
do{
	
	if(g=='m' || g=='M')
	{
		if(age>=50)
			cout<<"MAle -old";
		else
			cout<<"Male-Young";	
	}
	else if(g=='f'||g=='F')
	{
		if(age>=50)
			cout<<"Female-Old";
		else
			cout<<"Female-Young";	
	}
	else
		cout<<"Wrong Input";
		return 0;
}while(g=='m'||g=='M');
	return 0;
} 
