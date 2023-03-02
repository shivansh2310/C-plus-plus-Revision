#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sNum = 6;
    int guess;

    do
    {
        cout << "Enter guess: ";
        cin >> guess;
    } while (sNum != guess);

        cout << "you won";

    return 0;
}