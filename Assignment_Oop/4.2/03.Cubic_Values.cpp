//03 -  Write a program to find the multiplication values and the cubic values using
//inline function


#include<iostream>
using namespace std;

inline cube (int x)
{
	int result;
	result = x*x*x;
}

 main()
{
int x = 2;

cout<<"\nCubic Multiplication and Cubic Values\n\n";

cout<<cube(x);

}
