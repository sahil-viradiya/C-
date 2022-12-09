#include <iostream>

using namespace std;

class Message
{

private:
    string Name = "Sahil";

public:
    Message()
    {
        cout << "Name" << endl;
        cin >> Name;
        cout << endl;
    }

    void print()
    {
        cout << Name << endl;
    }

    void print(string surname)
    {
        cout << Name << surname;
    }
};

int main()
{
    // Message();
    Message m1;
    m1.print();
    m1.print("viradiya");
}