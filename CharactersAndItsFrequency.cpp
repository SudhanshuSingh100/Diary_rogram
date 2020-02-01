//print characters and its corresponding frequency occurance
#include<iostream>
using namespace std;

int main()
{
	int i,freq[256]={0};
	string s;
	cout<<"Enter the String : "; getline(cin,s);
	for(i=0;s[i];i++)
		 freq[s[i]]++;                     //total count of the individual character 

	for(i=0;s[i];i++)
	{
		if(freq[s[i]])      //result will be boolean '1'           
			cout<<s[i]<<"  "<<freq[s[i]]<<endl;     // if character and its frequency printed under true condition
			freq[s[i]]=0;      //to remove the display duplicacy of the characer after assigning zero(boolean '0')
		
	}
	return 0;
}
