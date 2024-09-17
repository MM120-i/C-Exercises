#include <iostream>

using namespace std;

int main(void)
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    do
    {
        if (guessCount < guessLimit)
        {
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuesses = true;
        }

    } while (secretNum != guess && !outOfGuesses);

    if (outOfGuesses)
    {
        cout << "You loose!" << endl;
    }
    else
    {
        cout << "You won!" << endl;
    }

    return 0;
}