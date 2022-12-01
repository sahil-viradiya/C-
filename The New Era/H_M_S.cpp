#include <iostream>

using namespace std;

class Time
{
public:
    int num;

    void set_time()
    {

        cout << "Enter Second : ";
        cin >> num;
    }
};

int main()
{
    Time t1;//create object 
    t1.set_time();//call function
    int num, second = 0, minit = 0, hour = 0;

    if (t1.num >= 3600)
    {
        hour = t1.num / 3600;
        t1.num -= hour * 3600;

        cout << "hour is :" << hour << endl;
    }

    if (t1.num >= 60)
    {
        minit = t1.num / 60;
        t1.num -= minit * 60;

        cout << "minit is :" << minit << endl;
    }
    if (t1.num >= 1)
    {
        second = t1.num / 1;

        cout << "second is :" << second << endl;
    }

    cout << "HH " << hour << " :"
         << " MM " << minit << " :"
         << " SS " << second;
}