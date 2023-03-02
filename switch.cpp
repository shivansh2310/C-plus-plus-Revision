#include <iostream>
#include <cmath>

using namespace std;

string getDayofWeek(int daynum)
{
    string dayName;

    switch (daynum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid day Number";
    }

    return dayName;
}

int main()
{

    cout << getDayofWeek(10);

    return 0;
}
