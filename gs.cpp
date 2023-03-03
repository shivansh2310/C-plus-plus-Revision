/* getter and setter code*/

#include <iostream>
#include <cmath>

using namespace std;

class Movie
{
private:
    string rating;

public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }
    string getRating()
    {
        return rating;
    }
};

int main()
{

    Movie avenegers("The Avengers", "Joss Wheton", "Tech");

    cout << avenegers.getRating();

    return 0;
}