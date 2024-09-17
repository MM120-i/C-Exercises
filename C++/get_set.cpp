#include <iostream>

using namespace std;

class Movie
{

private:
    string rating;

public:
    string title;
    string director;

    Movie(void)
    {
        title = "Empty, no title";
        director = "Empty, no director";
        rating = "Empty, no ratings";
    }

    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }

    string getRating()
    {
        return rating;
    }
};

int main(void)
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("Bird");

    cout << avengers.getRating() << endl;

    return 0;
}