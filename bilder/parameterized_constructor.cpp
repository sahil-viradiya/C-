#include<iostream>

using namespace std;

class Car{
    private:
    int seat;
    int wheel;
    string name;

    public:
    Car(int seat,int wheel,string name){
        this->seat=seat;
        this->wheel=wheel;
        this->name=name;
    }

    string getName(){
        return name;
    }
};

int main(){
    Car c1(2,4,"Alto");

    cout<<c1.getName();
    return 0;
}

