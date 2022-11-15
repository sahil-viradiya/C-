// WAP to find leap years from 2000 to 3000.
#include <iostream>
using namespace std;
int main()
{
    int year, cnt = 0;

    cout << "yes it's leap year is :";
    for (int i = 2000; i <= 3000; i++)
    {
        if (i % 4 == 0)
        {
            // cout<<i<<endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}