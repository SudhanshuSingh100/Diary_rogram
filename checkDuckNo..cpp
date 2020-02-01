//check the Duck Nomber or not 
#include<iostream>
using namespace std;
int main()
{
	char n[30];
	cout<<"Enter the number : ";
	cin>>n;
	if(n[0]== '0')
		cout<<"Not a duck number.";
	else cout<<"Duck Number.";
	return 0;
}
	
