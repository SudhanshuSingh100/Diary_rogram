#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
	char name[30],title[30],Company[24];
	int salary;
	public:
		void setdata(void);
		void display(void);
};

void Employee :: setdata()
{ 
   cout<<"Enter the Name : "; cin.getline(name,30);
   cout<<"Enter the Title: "; cin.getline(title,30);
   cout<<"Enter the Company: "; cin.getline(Company,30);
}

void Employee :: display()
{ 
    cout<<"Name  :  "<<name;	
    cout<<"\nTitle :  "<<title;
    cout<<"\nComapany :  "<<Company;
}

int main()
{
	Employee e1,e2;
	e1.setdata();
	e1.display();
	cout<<"\n----------------------------------\n";
	e2.setdata();
	e2.display();
	return 0;
}
