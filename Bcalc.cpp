#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int x, y;
    char op;
    int result;

    cout << "Enter First number: ";
    cin >> x;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Second number: ";
    cin >> y;

    if (op == '+')
    {
        result = x + y;
    }
    else if (op == '-')
    {
        result = x - y;
    }
    else if (op == '*')
    {
        result = x * y;
    }
    else if (op == '/')
    {
        result = x / y;
    }
    else
    {
        cout << "ERROR: Invalid";
    }

    cout << result << endl;

    return 0;
}
