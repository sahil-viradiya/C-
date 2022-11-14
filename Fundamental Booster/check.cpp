#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char ch;

    cout << "Enter Character : " << endl;
    cin>>ch;

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<<"it's vovel";
    }
    else
    {
        cout<<"it's constent";
    }
}