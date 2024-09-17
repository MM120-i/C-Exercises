#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;
};

int main(void)
{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "Jk Rowling";
    book1.pages = 1000;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkien";
    book2.pages = 750;

    cout << book2.author << endl;

    return 0;
}