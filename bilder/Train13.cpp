#include <iostream>
using namespace std;

class Train
{
public:
    int train_no;
    string train_name;
    string source;
    string destination;
    string time;

    Train()
    {
        cout << "Enter Train no : ";
        cin >> train_no;
        cout << "Enter train name : ";
        cin >> train_name;
        cout << "Enter Source :";
        cin >> source;
        cout << "Enter Destinaiton : ";
        cin >> destination;
        cout << "Enter Train Time : ";
        cin >> time;
    }

    void display()
    {
        cout << train_no << endl;
        cout << train_name << endl;
        cout << source << endl;
        cout << destination << endl;
        cout << time << endl;
    }

    int getNo()
    {
        return train_no;
    }
};

int main()
{
    int n, num;
    cout << "Input Trains : ";
    cin >> n;

    Train t[n];
    for (int i = 0; i < n; i++)
    {
        t[i].display();
    }

    cout << "Enter Train No : ";
    cin >> num;

    for (int i = 0; i < n; i++)
    {
        if (t[i].getNo() == num)
        {
            t[i].display();
        }
    }
}