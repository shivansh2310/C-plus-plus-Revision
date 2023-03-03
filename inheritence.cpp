#include <iostream>
using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }
    void makePasta()
    {
        cout << "The chef makes Pasta" << endl;
    }
};

class IndianChef : public Chef
{
public:
    void makeBiriyani()
    {
        cout << "The chef makesBiriyani" << endl;
    }
    void makePasta()
    {
        cout << "The chef makes Tandoori Pasta" << endl;
    }
};

int main()
{

    Chef chef;
    chef.makePasta();

    IndianChef indianChef;
    indianChef.makePasta();

    return 0;
}