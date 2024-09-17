#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    string major;
    double gpa;

    Student(void)
    {
        name = "Empty, no name";
        major = "Empty, no major";
        gpa = -1.0;
    }

    Student(string aName, string aMajor, double aGpa)
    {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors(void)
    {
        if (gpa >= 3.5)
        {
            return true;
        }

        return false;
    }
};

int main(void)
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Mahim", "Computer Science", 6.39);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}