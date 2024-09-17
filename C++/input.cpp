#include <iostream>

using namespace std;

int main(void)
{
    int age;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name;

    return 0;
}