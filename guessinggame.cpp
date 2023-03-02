#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sNum = 6;
    int guess;
    int gCount = 0;
    int gLimit = 3;
    bool outofGuesses = false;

    while (sNum != guess && !outofGuesses)
    {
        if (gCount < gLimit)
        {
            cout << "Enter guess: ";
            cin >> guess;
            gCount++;
        }
        else
        {
            outofGuesses = true;
        }
    }

    if (outofGuesses == true)
    {
        cout << "you loose";
    }
    else
    {
        cout << "you won";
    }

    return 0;
}