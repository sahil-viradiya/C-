#include <iostream>

using namespace std;

class A
{
public:
    int id;
    string name;
    string role;
    float salary;
    float exp;
    string comp_name;
    char address[100];
    string email;
    long contect;

    void setdata1()
    {
        cout << "Enter Id : \n";
        cin >> id;

        cout << "Enter name : \n";
        cin >> name;

        cout << "Enter Role : \n ";
        cin >> role;
    }
};

class B : public A
{
public:
    void setdata2()
    {
        cout << "Enter Salary : \n";
        cin >> salary;

        cout << "Enter Exp... : \n ";
        cin >> exp;
    }
};

class C : public B
{
public:
    void getdata1()
    {
        cout << name << endl
             << role << endl
             << salary << endl;
    }
    void setdata3()
    {
        cout << "Enter Comp Name : \n";
        cin >> comp_name;

        cout << "Address : \n ";
        cin >> address;
    }
};

class D : public C
{
public:
    void setdata4()
    {
        cout << "Enter Email : \n";
        cin >> email;

        cout << "Enter Contect Number : \n";
        cin >> contect;
    }

    void getdata()
    {
        cout << id << endl;
        cout << name << endl;
        cout << role << endl;
        cout << salary << endl;
        cout << exp << endl;
        cout << comp_name << endl;
        cout << address << endl;
        cout << email << endl;
        cout << contect << endl;
    }
};

int main()
{
    D d1;
    d1.setdata1();
    d1.setdata2();
    d1.setdata3();
    d1.setdata4();
    d1.getdata1();
    d1.getdata();
}
