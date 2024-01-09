//07 - Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the marks
//obtained in two subjects and class result contains the total marks obtained in
//the test. The class result can inherit the details of the marks obtained in the
//test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;


class Student {

public:
	int rollNumber;
    Student(int rollNumber) : rollNumber(rollNumber) {}

    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber <<endl;
    }
};

// Intermediate class: Test (inherits from Student)
class Test : public Student {

public:
    int subject1Marks;
    int subject2Marks;
    Test(int rollNumber, int subject1Marks, int subject2Marks)
        : Student(rollNumber), subject1Marks(subject1Marks), subject2Marks(subject2Marks) {}

    void displayTestMarks() {
        cout << "Subject 1 Marks: " << subject1Marks <<endl;
        cout << "Subject 2 Marks: " << subject2Marks <<endl;
    }
};

// Derived class: Result (inherits from Test)
class Result : public Test {
public:
    Result(int rollNumber, int subject1Marks, int subject2Marks)
        : Test(rollNumber, subject1Marks, subject2Marks) {}

    int calculateTotalMarks() {
        return subject1Marks + subject2Marks;
    }

    void displayResult() {
        displayRollNumber(); // Inherited from Student
        displayTestMarks();  // Inherited from Test
        cout << "Total Marks: " << calculateTotalMarks() <<endl;
    }
};

int main() {
    Result student1(101, 85, 90);
    student1.displayResult();

    return 0;
}
