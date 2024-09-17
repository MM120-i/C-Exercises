#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;

    Book(void)
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }

    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        aAuthor = aAuthor;
        pages = aPages;
    }
};

int main(void)
{
    Book book3;
    Book book1("Harry Potter", "Jk Rowling", 1000);
    Book book2("Lord of the Rings", "Tolkien", 750);

    cout << book3.title << endl;

    return 0;
}