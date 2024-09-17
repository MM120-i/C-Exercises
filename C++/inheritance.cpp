#include <iostream>

using namespace std;

class Chef
{
public:
    void makeChicken(void)
    {
        cout << "The chef makes chicken" << endl;
    }

    void makeSalad(void)
    {
        cout << "The chef makes salad" << endl;
    }

    void makeSpecialDish(void)
    {
        cout << "The chef makes a bbq ribs" << endl;
    }
};

class italianChef : public Chef
{
public:
    void makePasta(void)
    {
        cout << "The Italian chef makes pasta" << endl;
    }

    void makeSpecialDish(void)
    {
        cout << "The chef makes a pizza" << endl;
    }
};

int main(void)
{
    Chef chef;
    chef.makeSpecialDish();

    italianChef iChef;
    iChef.makeSpecialDish();

    return 0;
}