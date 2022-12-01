#include <iostream>

using namespace std;

class Rooms
{
public:
    int room_no;
    string housename;
    string area;
    string city;
    string state;

    void sahil_room()
    {
        room_no = 101;
        housename = "sahil's Home";
        area = "ManekChowk";
        city = "Ahmedabad";
        state = "gujrat";
    }

    void romil_room()
    {
        room_no = 102;
        housename = "romil's Home";
        area = "ManekChowk";
        city = "Ahmedabad";
        state = "gujrat";
    }

    void ronak_room()
    {
        room_no = 103;
        housename = "ronak's Home";
        area = "ManekChowk";
        city = "Ahmedabad";
        state = "gujrat";
    }
};

int main()
{
    Rooms r1, r2, r3;

    int ch;
    cout << "Enter Room No : 101 , 102 , 103 \n";
    cin >> ch;
    switch (ch)
    {
    case 101:
        r1.sahil_room();
        cout << "Room No is : " << r1.room_no << endl;
        cout << "HouseName :" << r1.housename << endl;
        cout << "Area : " << r1.area << endl;
        cout << "City : " << r1.city << endl;
        cout << "State : " << r1.state;
        break;
    case 102:
        r2.romil_room();
        cout << "Room No is : " << r2.room_no << endl;
        cout << "HouseName :" << r2.housename << endl;
        cout << "Area : " << r2.area << endl;
        cout << "City : " << r2.city << endl;
        cout << "State : " << r2.state;
        break;
    case 103:
        r3.ronak_room();
        cout << "Room No is : " << r3.room_no << endl;
        cout << "HouseName :" << r3.housename << endl;
        cout << "Area : " << r3.area << endl;
        cout << "City : " << r3.city << endl;
        cout << "State : " << r3.state;
        break;

    default:
    cout<<"invalid input";
        break;
    }
}