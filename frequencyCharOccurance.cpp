// print the characters and their frequency of occurance

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	cout<<"Enter the string : ";
	getline(cin,s);
	int freq[256] = {0};
    for(int i=0;s[i];i++)
       freq[s[i]]++;
    for(int i=0;s[i];i++)
    {  
       if(freq[s[i]])
          {
          	cout<<s[i]<<"  "<<freq[s[i]]<<endl;
          	freq[s[i]]=0;
		  }
	}   
	return 0;
}
