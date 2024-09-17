#include <iostream>

using namespace std;

// base class
class Animal
{

public:
    virtual void makeSound()
    {
        cout << "Some generic animal noise" << endl;
    }
};

// derived class
class Bird : public Animal
{
public:
    void makeSound() override
    {
        cout << "Chirp" << endl;
    }
};

// another derived class
class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "Meow" << endl;
    }
};

int main(void)
{
    Animal *animal1 = new Bird();
    Animal *animal2 = new Cat();

    animal1->makeSound();
    animal2->makeSound();

    delete animal1;
    delete animal2;

    return 0;
}
