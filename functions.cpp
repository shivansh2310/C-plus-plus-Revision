#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age)
{
    cout << "Hi " << name << endl;
    cout << "your age is: " << age << endl;
}

int main()
{

    sayHi("Raju", 30);
    sayHi("Raka", 32);
    sayHi("Ram", 33);
    return 0;
}
