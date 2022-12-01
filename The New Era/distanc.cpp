#include <iostream>

using namespace std;

class Distance
{

public:
    float feet;
    float inch;

    void set_distance()
    {
        cout << "Enter Feet";
        cin >> feet;

        cout << "Enter inch";
        cin >> inch;
    }
};

int main()
{

    Distance d1, d2;
    d1.set_distance();
    d2.set_distance();
    int feet = d1.feet + d2.feet;
    int inch = d1.inch + d2.inch;

    while (inch >= 12)
    {
        inch -= 12;
        feet++;
    }
    cout << "Feet is :" << feet << endl
         << "inch is :" << inch << endl;

    return 0;
}
