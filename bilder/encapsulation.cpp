#include <iostream>

using namespace std;

class Hotel
{
private:
    int id;
    string name;
    string type;
    int staff_size;
    string room_size;
    int year;
    string address;
    string rating_type;
    string website;

public:
    void setID(int id)
    {
        this->id = id;
    }
    int getID()
    {
        return id;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }

    void setType(string type)
    {
        this->type = type;
    }
    string getType()
    {
        return type;
    }

    void setStaffSize(int stafsize)
    {
        this->staff_size = stafsize;
    }
    int getStaffSize()
    {
        return staff_size;
    }

    void setRoom_size(string room_size)
    {
        this->room_size = room_size;
    }
    string getRoom_size()
    {
        return room_size;
    }

    void setYear(int year)
    {
        this->year = year;
    }
    int getYear()
    {
        return year;
    }

    void setAddress(string Address)
    {
        this->address = Address;
    }
    string getAddress()
    {
        return address;
    }

    void setRating_type(string rating_type)
    {
        this->rating_type = rating_type;
    }

    string getRating_type()
    {
        return rating_type;
    }

    void setWebsite(string website)
    {
        this->website = website;
    }
    string getWebsite()
    {
        return website;
    }
};

int main()
{
    Hotel h1;
    h1.setID(101);
    h1.setName("OYO");
    h1.setType("1BHK");
    h1.setStaffSize(15);
    h1.setRoom_size("35ft");
    h1.setYear(2022);
    h1.setAddress("Giris Coldrinks");
    h1.setRating_type("5 Star");
    h1.setWebsite("girishcold.com");


    cout<<h1.getID();
    cout<<h1.getName();
    cout<<h1.getType();
    cout<<h1.getStaffSize();
    cout<<h1.getRoom_size();
    cout<<h1.getYear();
    cout<<h1.getAddress();
    cout<<h1.getRating_type();
    cout<<h1.getWebsite();
}