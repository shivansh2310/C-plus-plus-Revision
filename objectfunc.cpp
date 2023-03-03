#include <iostream>
#include <cmath>

using namespace std;

class Student
{
public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa)
    {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors()
    {
        if (gpa >= 3.5)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Student student1("Jim", "Business", 3.4);
    Student student2("Roger", "Arts", 3.6);

    cout << student2.hasHonors();

    return 0;
}