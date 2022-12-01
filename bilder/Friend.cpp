#include <iostream>

using namespace std;
class Mult;
class Addition
{
private:
    int a1 = 10;

public:
    friend int add(Addition, Mult);
};

class Mult
{

    int m1 = 10;

public:
    friend int add(Addition, Mult);
};

int add(Addition a, Mult m)
{
    return a.a1 + m.m1;
}

int main()
{
    Addition o1;
    Mult o2;

    cout << "Ans is : " << add(o1, o2);
}