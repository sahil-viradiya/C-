#include<iostream>

using namespace std;
int mul = 1;
int fact(int n){

    if (n>0)
    {
        mul = mul * n;
        n--;
        fact(n);
    }
        

}

int main(){

    int num;
    cout<<"Enter Number : "<<endl;
    cin>>num;

    fact(num);
    cout<<"FACt is : "<<mul;
}