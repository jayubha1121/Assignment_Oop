//06 - Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)


#include <iostream>
#include <string>
using namespace std;

class Person 
{


public:
	
	string name;
    int age;


    void PersonReadData() 
	{
        cout << "\nEnter Name: \n";
        cin >> name;
        cout << "\nEnter Age: \n";
        cin >> age;
    }

    void PersonDisplayData() 
	{
        cout << "\nName: " << name <<endl;
        cout << "\nAge: " << age <<endl;
    }
};

class Student
{


public:
	    float percentage;


    void StudentReadData() 
	{

        cout << "\nEnter Percentage: \n";
        cin >> percentage;
    }

    void StudentDisplayData() 
	{
        cout << "\nPercentage: \n" << percentage<<endl;
    }
};

class Teacher : public Student, public Person 
{


public:
	int salary;

    void TeacherReadData() 
	{
        cout << "\nEnter Salary: \n";
        cin >> salary;
    }

    void TeacherDisplayData() 
	{
        cout << "\nSalary: $ " << salary <<endl;
    }
};

int main() 
{
	
	cout<<"\n****************** Multiple Inheritance ******************\n\n";
	Teacher T;
	
	T.PersonReadData();
	T.PersonDisplayData();
	
	T.StudentReadData();
	T.StudentDisplayData();
	
	T.TeacherReadData();
	T.TeacherDisplayData();

    return 0;
}
