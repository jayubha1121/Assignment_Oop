//13 - Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class MaxFriend
{
	private :
		int a,b;
			
	public :
		friend void max();
};

void max()
{
	int x,y;
	
	cout<<"\n*********** Max Number Finder using Friend Function ***********\n\n";
	
	cout<<"\nEnter the First Number \n";
	cin>>x;
	
	cout<<"\nEnter the Second Number \n";
	cin>>y;
	
	if(x>=y)
	{
		cout<<"\nThe Max Number is "<<x;
	}
	
	else if(y>=x)
	{
		cout<<"\nThe Max Number is "<<y<<endl;
	}
	
	else 
	{
		cout<<" ";
		
	}
}

int main ()
{
	max();
}