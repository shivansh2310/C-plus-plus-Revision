#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int grid[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << grid[i][j];
        }

        cout << endl;
    }

    return 0;
}