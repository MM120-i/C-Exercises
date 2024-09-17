#include <iostream>

using namespace std;

void sayHi(string, int);
int main(void)
{
    sayHi("Mahim", 22);
    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << " you are " << age << endl;
}