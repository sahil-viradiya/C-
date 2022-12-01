#include <iostream>

using namespace std;

class Times
{
public:
    int hour, minutes, second;
    void time()
    {
        cout << "Enter Hour : ";
        cin >> hour;
        cout << endl;

        cout << "Enter minutes : ";
        cin >> minutes;
        cout << endl;

        cout << "Enter Second : ";
        cin >> second;
        cout <<endl;
    }
};

int main()
{
    Times t1, t2;
    t1.time();
    t2.time();

    cout << "Hour : " << t1.hour + t2.hour << endl
         << "Minutes : " << t1.minutes + t2.minutes << endl
         << "Second : " << t1.second + t2.second;
}