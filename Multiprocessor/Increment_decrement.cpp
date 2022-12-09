#include <iostream>

using namespace std;

class Classis
{
public:
    int chair = 25;

    void chairs(int ketli)
    {
        cout << chair;
    }

    void operator++()
    {
        --chair;
    }
    void operator--(){
        ++chair;
    }
};

int main()
{
    Classis c1;
    cout<<"Main chair : "<<c1.chair<<endl;
    ++c1;
    cout << "After Decrement : "<<c1.chair<<endl;
    --c1;
    cout<< "After Increment : "<<c1.chair;

}