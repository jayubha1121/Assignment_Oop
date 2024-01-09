#include<iostream>
using namespace std;

class Calculator
{
 	  public :
 	    	int a,b;
 			    		  
   		  void inputData()
 	     {
 		      	 cout<<"\n************ Simple Calculator ************\n\n";
 		  	   cout<<"\nEnter the Number of A : \n";
				  cin>>a;
				      	
 		  	   cout<<"\nEnter the Number of B : \n";
				  cin>>b;    	
		 }
		   
   		   void displayData()
		   {
		   	    cout<<"\n\nThe Addition of A and B is : "<<a+b<<endl;  	
		   	    cout<<"\nThe Subtraction of A and B is : "<<a-b<<endl;  	
		   	    cout<<"\nThe Multiplication of A and B is : "<<a*b<<endl;  	
		   	    cout<<"\nThe Division of A and B is : "<<a/b<<endl;  	
		   	    cout<<"\nThe Modulo of A and B is : "<<a%b<<endl;  
				   
				      cout<<"\n\n\n--------------- Calculation Done ---------------\n\n";	
    	   } 
	
};

int main()
{

Calculator CL;
CL.inputData();
CL.displayData();

}
