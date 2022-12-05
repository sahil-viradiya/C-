#include <iostream>

using namespace std;

class Vehicle
{
public:
    string name;
    int seat;
    int wheel;
};

class Car : protected Vehicle
{
public:
    bool automatic;

    Car()
    {
    }

    Car(string name, int seat, int wheel, bool automatic)
    {
        this->automatic = true;
        this->name = name;
        this->seat = seat;
        this->wheel = wheel;
    }

    string getName()
    {
        return name;
    }
};

class Truck : private Vehicle
{
public:
    string Fule_Type;

    Truck()
    {
    }

    Truck(string name, int seat, int wheel, string Fule_Type)
    {
        this->Fule_Type = Fule_Type;
        this->name = name;
        this->seat = seat;
        this->wheel = wheel;
    }

    string getFuleType()
    {
        return Fule_Type;
    }
};

class Brand : public Vehicle
{
public:
    string brand_name;

    Brand()
    {
    }

    Brand(string brand_name, string name, int wheel, int seat)
    {
        this->brand_name = brand_name;
        this->name = name;
        this->seat = seat;
        this->wheel = wheel;
    }

    string getbrandname()
    {
        return brand_name;
    }
};

int main()
{

    Car alto("Fanti", 3, 4, true);
    Brand merchidiz("Merchidez bens", "C classs", 4, 4);
    Truck Tata("Eicher", 2, 16, "Petrol");

    cout << "Car Name : " << alto.getName() << endl;
    cout << "Brand Name : " << merchidiz.getbrandname() << endl;
    cout << "Fule Type : " << Tata.getFuleType();
}