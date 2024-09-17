#include <iostream>

using namespace std;

double cube(double);

int main(void)
{
    double answer = cube(5.0);
    cout << answer << endl;

    return 0;
}

double cube(double num)
{
    return num * num * num;
}