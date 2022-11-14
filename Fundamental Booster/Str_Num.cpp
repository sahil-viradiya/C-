#include <iostream>

using namespace std;

int main()
{
    int num;
    char ch;
    cout << "Enter String or Num : ";
    cin >> ch;
    
    if (isdigit(ch)) //using isdigit function
    {
        cout << "it's Number";
    }
    else
    {
        cout << "it's string";
    }

    return 0;
}
