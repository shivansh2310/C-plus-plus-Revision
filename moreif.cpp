#include <iostream>
#include <cmath>

using namespace std;

int getMax(int x, int y, int z)
{
    int result;

    if (x >= y && x >= z)
    {
        result = x;
    }
    else if (y >= x && y >= z)
    {
        result = y;
    }
    else
    {
        result = z;
    }

    return result;
}

int main()
{

    cout << getMax(5, 7, 9);
    return 0;
}
