#include<iostream>
#include<cmath>
using namespace std;

class ElectricCharge
{   
     char cName[30];
     int units;
     
     public:
     	void CustomerDetail(void)
		 {
     		cout<<"Enter Name : "; cin.getline(cName,30);
     		cout<<"Enter Units: "; cin>>units;
		 }
     	float chargeCalcu()
     	{  float tot_charge;
     	   if(units<=100)
			{  
			  tot_charge = 50+(units*0.60);
			}
     		else if(units>100 && units<=300)
     		{ 
     		   tot_charge = (units*0.80)+50;
		    }
		     else
		     {
		     	tot_charge = (units*0.90)+50;
		     	if(tot_charge>300)
		     	{  
		     	 tot_charge += ((units*0.90)+50)*0.15;
				 }
			 }
		 return tot_charge;	 
	    }
	    
     	void Display()
		 {
		 	cout<<"********************************************\n";
     		cout<<"Customer Name : "<<cName;
     		cout<<"\nUnit Count    : "<<units;
     		cout<<"\nTotal Charge  : "<<chargeCalcu();
     		cout<<endl;
		 }
     		
}; 

int main()
{
	ElectricCharge c1;
	c1.CustomerDetail();
	c1.Display();
	return 0;
	
}
