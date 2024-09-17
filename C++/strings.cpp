#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string pharase = "Giraffe Academy";
    string phraseSub = pharase.substr(8, 3);

    cout << phraseSub;

    return 0;
}