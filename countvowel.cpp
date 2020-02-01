// Write your code here
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    
    while(t--)
    {   string s;
        cin>>s;
        int count=0;
        for(i=1;s[i];i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]== 'O' || s[i]== 'U' || s[i]== 'a'|| s[i] == 'e' || s[i]== 'i' || s[i]=='o' || s[i]== 'u') 
               {    count++;   }
        } 
      cout<<count<<endl;
    }
    return 0;
}
