#include <iostream>

using namespace std;

class House
{
private:
    string name;
    int people;
    int rooms;

public:
    House(string name, int people, int rooms)
    {
        this->name = name;
        this->people = people;
        this->rooms = rooms;
    }

    string getName()
    {
        return name;
    }

    int getPeople()
    {
        return people;
    }

    int getrooms()
    {
        return rooms;
    }
    ~House()// destructior
    {
        this->rooms = 0;
        cout<<"destrcut_room : "<<this->rooms;
    }

    // void display()
    // {
    //     cout << name << endl;
    //     cout << people << endl;
    //     cout << rooms << endl;
    // }
};

int main()
{
    House h1("sahil", 3, 5);
    cout<<h1.getName()<<endl;
    cout<<h1.getPeople()<<endl;
    cout<<h1.getrooms()<<endl;

    return 0;
}