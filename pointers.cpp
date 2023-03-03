#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int age = 19;
    int *pAge = &age;
    double gpa = 2.5;
    double *pGape = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << &*&pAge;

    return 0;
}