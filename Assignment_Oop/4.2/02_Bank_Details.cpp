//Q 2 Define a class to represent a bank account. Include the following members:
	
//1. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account

//2. Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance


#include<iostream>
using namespace std;

class BankAccount
{
 	  public:
	   string name;
	   int accountNumber;
	   string accountType;
	   float balance;
	   
	   
	   void inputData()
	   		{
	    	cout<<"\n**************** Bank Account Details ****************\n\n\n";
			    					  
			cout<<"\nEnter the Name of Account Holder \n";
 			cin>>name;
 					  	 
			cout<<"\nEnter the Bank Account Number \n";
 			cin>>accountNumber;
 					  	 
			cout<<"\nSelect Type of your Account Saving or Current \n";
 			cin>>accountType;
 					  	 
			cout<<"\nEnter the Amount in your Bank Account \n";
 			cin>>balance;
 					  	 
			 }	
	    
	    void displayData()
		    {
			     cout<<"\nAccount Holder Name \n"<<name<<endl;
			     cout<<"\nYour Account Number \n"<<accountNumber<<endl;
			     cout<<"\nAccount Type \n"<<accountType<<endl;
			     cout<<"\nBalnce in your Bank Account \n"<<balance<<endl;
				 	
  				cout<<"\n\n\n****************** Thanks for Visiting n******************\n";
			}
};


int main()
{
 	BankAccount BD;
 	BD.inputData();
 	BD.displayData();

}
