#include <iostream>

using namespace std;

// abstract class
class Shape
{
public:
    virtual void draw() = 0;

    virtual void move()
    {
        cout << "Moving Shape" << endl;
    }
};

// derived class
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

// another derived class
class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Square" << endl;
    }
};

int main(void)
{
    Circle c;
    Square s;

    Shape *shape1 = &c;
    Shape *shape2 = &s;

    shape1->draw();
    shape2->move();

    shape2->draw();
    shape2->move();

    return 0;
}
