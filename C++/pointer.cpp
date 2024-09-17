#include <iostream>

using namespace std;

int main(void)
{
    int age = 22;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mahim";
    string *pName = &name;

    cout << "Age: " << *pAge << endl;
    cout << "GPA: " << *&gpa << endl;
    cout << "Name: " << pName << endl;

    return 0;
}