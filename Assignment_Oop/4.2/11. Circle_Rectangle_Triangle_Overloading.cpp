//11. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading

//--> Rectangle: Area * breadth
//--> Triangle: ½ *Area* breadth
//--> Circle: Pi * Area *Area

#include<iostream>
using namespace std;


using namespace std;
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int s,l,b;
        float r,bs,ht;
        
        cout<<"\n************* Area of Square *************\n\n";
        cout<<"\nEnter Side of a Square : ";
        cin>>s;
        
        cout<<"\n************* Area of Rectangle *************\n\n";
        cout<<"\nEnter Length of Rectangle : \n";
        cin>>l;
        
        cout<<"\nEnter Breadth of Rectangle : \n";
        cin>>b;
        
        cout<<"\n************* Radius of Circle *************\n\n";
        cout<<"\nEnter Radius of Circle : \n";
        cin>>r;
        
        cout<<"\n************* Area of Triangle *************\n\n";
        cout<<"\nEnter Base of Triangle : \n";
        cin>>bs;
        
        cout<<"\nEnter Height of Triangle : \n";
        cin>>ht;
        
        cout<<"\n\n---------------- Results ----------------\n\n";
        
        cout<<"\nArea of Square is  "<<area(s)<<endl;
        cout<<"\nArea of Rectangle is  "<<area(l,b)<<endl;
    cout<<"\nArea of Circle is  "<<area(r)<<endl;
    cout<<"\nArea of Triangle is "<<area(bs,ht)<<endl;
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}