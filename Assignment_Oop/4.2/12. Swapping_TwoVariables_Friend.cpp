//12. Write a program to swap the two numbers using friend function without
//using third variable

#include<iostream>
using namespace std;

class A
{
	private :
		int X,y;
			
	public :
		   
 	  friend void swap();
};

void swap()
{
	int a,b;
	
	printf("\n******** Swapping Using Friend using TWO Variables ********\n\n");
	printf("\nEnter the Value of A is\n");
	scanf("%d",&a);
	
	printf("\nEnter the Value of B is\n");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\n\nAfter Swapping the Value of A is %d \n",a);
	printf("\nAfter Swapping the Value of B is %d \n",b);
}

int main()
{
	swap();
}
