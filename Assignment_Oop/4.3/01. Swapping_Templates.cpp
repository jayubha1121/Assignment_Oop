//01. Write a program of to swap the two values using templates

#include<iostream>
using namespace std;

template <class T>
void swapping (T &a, T &b)

{
	T temp = a;
	a = b;
	b = temp;

}

int main()
{
char a = 'A', b = 'B';
int x = 10, y = 20;

cout<<"Before Swapping"<<"\na = "<<a<<"\nb = "<<b<<endl<<endl;
swapping (a,b);
cout<<"After Swapping"<<"\na = "<<a<<"\nb = "<<b<<endl<<endl<<endl;

cout<<"Before Swapping"<<"\nX = "<<x<<"\nY = "<<y<<endl<<endl;
swapping (x,y);

cout<<"After Swapping"<<"\nX = "<<x<<"\nY = "<<y<<endl;

}

