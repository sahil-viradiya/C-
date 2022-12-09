#include <iostream>
using namespace std;

class Hostel
{
public:
    int boys;
    int girls;
    string cast;

    void setValue(int boys)
    {
        cout << " Boys is : " << boys << endl;
    }

    void setValue(int girls, string cast)
    {
        cout << " girls is : " << girls << endl;
        cout << "Cast : " << cast << endl;
    }
};

int main()
{
    Hostel h;
    h.setValue(25);
    h.setValue(30, "patel");
}