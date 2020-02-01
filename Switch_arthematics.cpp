 #include<iostream>
 using namespace std;
 int main()
 {
 	int a,b;
 	char c,start;
 	
 	
do{ 
    cout<<"Do you want to continue(y/n):" ;
	cin>>start;
	if(start=='y' || start=='Y')
	{
		cout<<"Enter Mathematical Expression : "; cin>>a>>c>>b; 
			switch(c)
		 	{
		 		case '+' : cout<<a+b;
				          break;
		 		case '-': cout<<a-b;
				          break;
		 		case '*': cout<<a*b;
				 		  break;
		 		case '/':  cout<<a/b;
				 			break;
		 		case '%': cout<<a%b;
				          break;
				default : cout<<"Invalid Expression";        
			 }
			 cout<<endl;
    }
	else
		return 0;		 
}while(true);
	 
	 return 0;
 }
