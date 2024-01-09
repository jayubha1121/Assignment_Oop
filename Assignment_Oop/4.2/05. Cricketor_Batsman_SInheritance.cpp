//05 - Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)

#include <iostream>
#include <string>
using namespace std;

class Cricketor
{
	public :
  					
	void CricketorData()
	{
		cout<<"\n************** Single Inheritance - Cricketor Details **************\n\n";
								
		cout<<"\nName of Cricketor : - Akshay Pitroda\n";
				 	
		cout<<"\nAge of Cricketor : -  27 Years Old\n";
		 	
	}

};

class Batsman : public Cricketor
{
	public :
		
	void BatsmanData()
	{
        cout<<"\nRuns of Batsman : - 600\n";
				 	
		cout<<"\nAverage of Batsman : -  56\n";

		cout<<"\nBest Performance of Batsman : - 15 Matches\n";
	}
	
};

int main ()
{
 	Batsman B;
 	B.CricketorData();
 	B.BatsmanData();
 	
}