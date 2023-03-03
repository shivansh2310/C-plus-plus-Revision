#include <iostream>
#include <cmath>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int page;
};

int main()
{

    Book book1;
    book1.title = "Harry potter";
    book1.author = "Jk rowling";
    book1.page = 500;

    Book book2;
    book2.title = "Lords of the Rings";
    book2.author = "R.R tolkien";
    book2.page = 800;

    cout << book1.title << endl;
    cout << book2.title << endl;

    return 0;
}