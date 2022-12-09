#include <iostream>

using namespace std;

class Distance
{
public:
    int feet, inch;

    Distance()
    {
    }
    Distance(int feet, int inch)
    {
        this->feet = feet;
        this->inch = inch;
    }

    Distance operator-(Distance &d2)
    {
        Distance d3;

        d3.feet = this->feet - d2.feet;
        d3.inch = this->inch - d2.inch;

        return d3;
    }
};

int main()
{
    Distance d1(10, 10);
    Distance d2(15, 15);

    Distance d3;
    d3 = d1 - d2;

    cout << "Total Feet && Inch : " << d3.feet << endl
         << d3.inch;
}