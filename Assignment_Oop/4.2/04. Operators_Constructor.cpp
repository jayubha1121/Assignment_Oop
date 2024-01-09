//04  -Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.

#include <iostream>
using namespace std;

class Student
{
	public :
		Student()
		{
			cout<<"\n************* Addition, Subtraction, Multiplication and Divisable *************\n\n";
			cout<<"\n--------- Using Constructor ---------\n\n";
		}
		
		Student (int a, int b)
		{
			cout<<"\nAddtion of A and B = "<<a+b;
			cout<<"\n\nSubtraction of A and B = "<<a-b;
			cout<<"\n\nMultiplication of A and B = "<<a*b;
			cout<<"\n\nDivision of A and B = "<<a/b<<endl;
		}		
};

int main()
{
	Student s1 = Student();
	Student s2 = Student(10,5);
}
