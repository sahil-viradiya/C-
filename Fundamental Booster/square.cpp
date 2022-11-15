#include <iostream>
#include<math.h>
// squre function is (squrt)
//  squre = num(squrt)
using namespace std;

int main()
{

    float num, squre = 0;
    int array[50] = {10, 20, 30, 40, 50}, i;

    for (i = 0; array[i] != '\0'; i++)
    {
        squre = sqrt(array[i]);
        cout << squre << endl;
    }

    return 0;
}