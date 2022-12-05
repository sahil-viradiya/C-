#include <iostream>

using namespace std;

class Mother
{
public:
    void display()
    {
        cout << "I love my son .... ";
    }
};

class Daughter : public Mother
{
public:
    void display()
    {
        cout << "I love my mother...";
    }
};

int main()
{
    Daughter d;

   d.display();
}