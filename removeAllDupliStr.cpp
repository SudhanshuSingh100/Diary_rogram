 #include<iostream>
 using namespace std;

char *`removeDuplicate(char s[], int n)
{   //used as indes as modified string
	int index=0;
	
	for(int i=0 ; i<n ;i++)  //traverse entire string
	{
		int j;
		for(int j=0; j<i; j++)
		{   //check if s[i] if present before it  
			if(s[i] == s[j])   
				break;		
		}
	
		if(j == i)   //if not present .then add it to the result
			s[index++] = s[i];
	 	
	}
	return s;	
}

int main()  //driver code
{ 
	char str[]= "bananas" ;
	int n = sizeof(str)/sizeof(str[0]);
	cout<< removeDuplicate(str,n);
	return 0;
}
