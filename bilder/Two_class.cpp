#include <iostream>

using namespace std;

class Strudent
{
private:
    int Roll_no;
    string name;
    string std;

public:
    void details(int Roll_no, string name, string std)
    {
        this->Roll_no = Roll_no;
        this->name = name;
        this->std = std;
    }
    Strudent() // default constructor
    {
    }
    Strudent(Strudent &a) // copy constructor
    {
        Roll_no = a.Roll_no;
        name = a.name;
        std = a.std;
    }
    void display()
    {
        cout << "Roll no is :" << Roll_no << endl
             << "Name is : " << name << endl
             << "Std is :" << std << endl
             << endl;
    }
};

int main()
{

    Strudent s1;
    s1.details(101, "sahil", "BCA");
    s1.display();

    Strudent s2(s1);
    s2.display();
}