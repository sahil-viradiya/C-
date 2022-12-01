#include<iostream>

using namespace std;

class Cafe{
    private:
    string cafe_name;
    int item;
    string item_name;

    public:
    void cafe_details(string x,int y,string z){
        cafe_name = x;
        item = y;
        item_name = z;
    }

    Cafe(){

    }

    Cafe(Cafe &c1){
        cafe_name = c1.cafe_name;
        item = c1.item;
        item_name = c1.item_name;
    }

    void dispaly(){
        cout<<"Cafe name : "<<cafe_name<<endl;
        cout<<"Numbers of Item : "<<item<<endl;
        cout<<"Item name : "<<item_name<<endl<<endl;

    }

};

int main(){
    Cafe ca1;
    ca1.cafe_details("dosti",2,"pakodi");
    ca1.dispaly();

    Cafe c12(ca1);
    c12.dispaly();



}