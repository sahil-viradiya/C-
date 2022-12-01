#include <iostream>

using namespace std;

class Demo
{

public:
    string L_name;

    void set_fname(string fnmae)
    {
        firstname = fnmae;
    }
    string get_fname()
    {

        return firstname;
    }

private:
    string firstname;
};

int main()
{

    Demo s1;

    s1.L_name = "sahil";
    s1.set_fname("viradiya");
    cout << s1.get_fname() << endl
         << s1.L_name;
}
