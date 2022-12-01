#include<iostream>

using namespace std;

class A{
    public:
    string name;
    A(){// default const or no arguments...
        cout<<"Enter Your Name : ";
        cin>>name;
    }

    // void display(){
    //     cout<<name;
    // }
};

int main(){
    A a1;
    // a1.display();
    cout<<"Your name is : "<<a1.name;
}