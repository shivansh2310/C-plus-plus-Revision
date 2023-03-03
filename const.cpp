#include <iostream>
#include <cmath>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int page;
    Book(string aTitle, string aAuthor, int aPage)
    {
        title = aTitle;
        author = aAuthor;
        page = aPage;
    }
};

int main()
{

    Book book1("Harry potter", "Jk rowling", 500);
    Book book2("Lords of the Rings", "R.R tolkien", 800);

    cout << book1.title;

    return 0;
}