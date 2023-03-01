#include <iostream>
#include <cmath>

using namespace std;

double cube(double x)
{
    double result = x * x * x;
    return result;
}

int main()
{

    double answer = cube(5.0);
    cout << answer << endl;

    return 0;
}
