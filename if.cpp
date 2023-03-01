#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    bool isMale = true;
    bool isTall = false;

    if (isMale && isTall)
    {
        cout << "you are tall male";
    }
    else if (isMale && !isTall)
    {
        cout << "you are short male";
    }
    else
    {
        cout << "you are female";
    }

    return 0;
}
