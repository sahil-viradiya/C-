#include <iostream>

using namespace std;

// int a[2] = { }, b[2] = { };
void swap(int a[2], int b[2])
{
    int temp,i;
    for (i = 0; i != 2; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
   

    // cout <<b[i]; 
}

int main()
{
    int x[2] = {10, 20};
    int y[2] = {30,40};

    swap(x, y);
    for (int i = 0; i != 2; i++)
    {
            cout <<x[i]<<endl;       
    }
    
    for (int i = 0; i != 2; i++)
    {
            cout <<y[i]<<endl;        
    }
    return 0;
}