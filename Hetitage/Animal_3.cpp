#include <iostream>

using namespace std;

class Animal
{
public:
    string name;
    int age;
};

class Zebra : public Animal
{
public:
    float height;
    void setzebra(string name, int age, float height)
    {
        this->name = name;
        this->age = age;
        this->height = height;
    }
};

class Dolphin : public Animal
{
public:
    float weight;
   void setdolphin(string name, int age, float weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }
};

int main()
{
    Zebra z;
    Dolphin d;

    z.setzebra("chintu",25,3.5);
    d.setdolphin("misri",55,110);

    cout<<"Zebra information...\n"<<"name is : "<<z.name<<endl<<"Age is :"<<z.age<<endl<<"Height is : "<<z.height<<endl<<endl;
    cout<<"Dolphin information....\n"<<"Name is : "<<d.name<<endl<<"Age is :"<<d.age<<endl<<"Height is : "<<d.weight<<endl;



}