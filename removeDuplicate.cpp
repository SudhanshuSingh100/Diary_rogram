#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicate(char s[], int n)
{
	
	if(n<2)
		return;
	int j=0; //index of current distinct character
	
	for(int i=1; i<n ; i++)
	{
		if(s[j] != s[i])
		{  
		   j++;
		   s[j] = s[i];
		}
	}
	j++;
	s[j]='\0';
	cout<<s<<endl;
}

int main()
{
	char s[]= "accccsdd";
	int n = strlen(s);
	removeDuplicate(s,n);
	return 0;
	
}
