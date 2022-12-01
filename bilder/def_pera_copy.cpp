#include <iostream>
using namespace std;

class Store
{
private:
    string store_name;
    int store_num;
    string address;

public:
    Store()
    { // default
        cout << "Enter Store Name : ";
        cin >> store_name;
    }
    void print()
    {
        cout << store_name << endl;
        cout << "copy : " << address << endl;
    }

    Store(int store_num, string address)
    { // perameterize
        this->store_num = store_num;
        this->address = address;
    }

    int getstore_num()
    {
        return store_num;
    }

    string getaddress()
    {
        return address;
    }

    Store(Store &s3)//copy
    {
        this->address = s3.address;
    }
};

int main()
{
    Store s1;
    s1.print();

    Store s2(4, "Rajkot");
    cout << "Store num :" << s2.getstore_num() << endl
         << "store address : " << s2.getaddress();

    Store s3(s2);
    s3.print();
}