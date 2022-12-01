#include <iostream>

using namespace std;

class Supermarket
{

public:
    int Item_no;
    string name;
    int Qty;
    float Tax;
    float Discount;

    void getData()
    {
        cout << "Enter Item no : ";
        cin >> Item_no;

        cout << "Enter Item name : ";
        cin >> name;

        cout << "Enter qty : ";
        cin >> Qty;

        cout << "Enter Tax : ";
        cin >> Tax;

        cout << "Enter Discount : ";
        cin >> Discount;
    }

    void display()
    {
        cout << Item_no << endl;
        cout << name << endl;
        cout << Qty << endl;
        cout << Tax << endl;
        cout << Discount << endl;
    }
};

int main()
{

    int password, n, temp;
    string UserName;

    string user;
    int pass;
    user = "sahil";
    pass = 123;
    cout << "Enter Username : ";
    cin >> UserName;

    cout << "Enter Password : ";
    cin >> password;

    if (user == UserName && pass == password)
    {
        cout << "Sign up successfully \n ";

        cout << "Enter Items : ";
        cin >> n;
        Supermarket s1[10];

        for (int i = 0; i < n; i++)
        {
            s1[i].getData();
        }

        cout << "\n Assending Order : \n";

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s1[i].Item_no > s1[j].Item_no)
                {
                    temp = s1[i].Item_no;
                    s1[i].Item_no = s1[j].Item_no;
                    s1[j].Item_no = temp;
                }
                for (int k = 0; k < n; k++)
                {
                    s1[k].display();
                }
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid Password or username";
    }
}