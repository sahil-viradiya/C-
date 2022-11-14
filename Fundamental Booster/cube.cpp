#include <iostream>
// squre function is (squrt)
//  squre = num(squrt)
using namespace std;

int main()
{

    int num, squre = 0, array[50] = {10, 20, 30, 40, 50}, i;

    for (i = 0; array[i] != '\0'; i++)
    {
        squre = array[i] * array[i] * array[i];
        cout << squre << endl;
    }

    return 0;
}