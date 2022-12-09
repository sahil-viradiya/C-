#include <iostream>

using namespace std;

class Hostel
{
public:
    void Room()
    {
        cout << "Hotstel Rooms ";
    }
};

class PG : public Hostel
{

public:
    void Room()
    {
        cout << "PG Rooms";
    }
};

int main()
{
    PG p;
    p.Room();
}