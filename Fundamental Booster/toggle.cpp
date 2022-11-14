#include<iostream>
#include<string.h>

using namespace std;

int main(){

int i;
char ch[100];

cout<<"Enter A String"<<endl;
gets(ch);

for ( i = 0; ch[i] != '\0'; i++)
{
    if (ch[i] >= 'A' && ch[i] <= 'Z' )
    {
        ch[i] += 32;
    }
    else
    {
        ch[i]-=32;
    }
    
}

cout<<"After toggle string is : "<<ch;


}