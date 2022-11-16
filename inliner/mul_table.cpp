#include <iostream>

using namespace std;

int mul ;
inline void table(int n)
{
    // cout << n;
    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        cout << n  << "*" << i << "=" << mul<<endl;
    }
}

int main()
{

    int num;

    cout << "Enter Number :";
    cin >> num;
    table(num);
    return 0;
}