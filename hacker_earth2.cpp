#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[35];
	cout<<"Enter the string(PalindromeString) : "; cin>>s;
	int len=strlen(s);
	int start=0;
	int end=len-1;
    while(start<end)
	{
		if(s[start] != s[end])
		{
			 cout<<"No";
			 return 0;
		}
		start++;
		end--;
	}
	cout<<"Yes";
 return 0;	
}
