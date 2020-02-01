#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str;
	cout<<"Enter String : ";
	getline(cin,str);
	int flag=0;
	char s=str[0]; 
	int n=sizeof(str)/sizeof(str[0]);
	char e=str[n-1];
	while(s<e)
	{  
	   if(str[s++] != str[e--])
	   {
	   	  cout<<"String is not palindrome.";
	   	  return 0;
	   	  
	   }
		
	}
	
	cout<<"String is  palindrome.";   
	return 0;
}
