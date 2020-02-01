//Remove the duplicate character in the order
//Input : bananas
//Output : bans
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string s,result="";
   cout<<"Enter string : "; getline(cin,s);
   int hash[127]={0};
   for(int i=0;i<=s.length();i++)
   {
   	 if(hash[s[i]]==0)
   	 {  
   	 	hash[s[i]]=1;
   	 	result =result + s[i];
	 }
   }
   cout<<"New String : "<<result;
   return 0;	
}
