 #include<iostream>
 #include<cstring>
 using namespace std;
  int main()     
       {
        char n[20];
        cin>>n;
        int x=0,i,j;
        int len=strlen(n);
        for(int i=0;i<len/2;i++)
        {
            if(n[i]=='z')
              {  x++;
                 n[i]='z';
              }
            if(n[i]!='z')
                return 0;
        }
        int y;
        y=x*2;
        char ar2[y];
        for(int j=0;j<=y;j++)
        {
            ar2[j]+='o';
        }
        
        ar2[++y]='\0';
        cout<<n<<ar2;
        return 0;
        }
