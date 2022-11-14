// WAP to find leap years from 2000 to 3000.
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter Year between 2000 to 3000 : ";
    cin >> year;

    if (year >= 2000 && year <= 3000)
    {
        if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
        {
            cout << "yes it's leap year";
        }
        else
        {
            cout << "it is not leap year";
        }
    }

    return 0;
}