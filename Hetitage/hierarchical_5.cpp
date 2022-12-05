#include <iostream>
using namespace std;

class Number
{
public:
    int num;
    Number()
    {
        cout << "Enter Number : ";
        cin >> num;
    }
};

class Squre : public Number
{
public:
    Squre() : Number()
    {
        // cout << num;

        int squr;
        cout << "Number of Squre : ";
        squr = num * num;

        cout << squr << endl;
    }
};

class Cube : public Number
{

public:
    Cube() : Number()
    {
        int cube;
        cout << "Number of Cube : ";
        cube = num * num * num;

        cout << cube;
    }
};

int main()
{
    Squre s;
    Cube c;
}