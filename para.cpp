#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string dob;
    float totalMarks;

public:
    // Default Constructor
    Student() {
        rollNo = 0;
        name = "";
        dob = "";
        totalMarks = 0;
    }

    // Parameterized Constructor
    Student(int r, string n, string d, float m) {
        rollNo = r;
        name = n;
        dob = d;
        totalMarks = m;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "------------------------" << endl;
    }

    int getRollNo() {
        return rollNo;
    }

    string getDOB() {
        return dob;
    }

    float getMarks() {
        return totalMarks;
    }
};

int main() {

    Student s[10] = {
        Student(1, "Aman", "01-01-2003", 450),
        Student(2, "Riya", "12-03-2002", 470),
        Student(3, "Kunal", "25-07-2003", 430),
        Student(4, "Sneha", "09-11-2002", 490),
        Student(5, "Rahul", "14-02-2003", 410),
        Student(6, "Neha", "30-08-2002", 480),
        Student(7, "Arjun", "18-06-2003", 460),
        Student(8, "Priya", "22-09-2002", 420),
        Student(9, "Vikas", "05-05-2003", 440),
        Student(10, "Anjali", "17-12-2002", 500)
    };

    cout << "\n--- Student Details ---\n";

    for(int i = 0; i < 10; i++) {
        s[i].display();
    }

    return 0;
}