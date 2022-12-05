#include <iostream>
#include <string.h>

using namespace std;

class BasicInformation
{
public:
    int emp_id;
    char name[50];
    int age;
    BasicInformation()
    {
        cout << "Enter Emp Id :";
        cin >> emp_id;
        fflush(stdin);
        cout << "Enter Emp Name : ";
        gets(name);
        fflush(stdin);
        cout << "Enter Emp age : ";
        cin >> age;
    }
};
class DeptInfo
{
public:
    string dept_name;
    string designation;

    DeptInfo()
    {
        cout << "Enter Dept name : ";
        cin >> dept_name;

        cout << "Enter designation : ";
        cin >> designation;
        cout<<endl<<endl<<endl;
    }
};
class Employee : public BasicInformation, public DeptInfo
{
public:
    Employee() : BasicInformation(), DeptInfo()
    {
        cout << emp_id << endl
             << name << endl
             << age << endl
             << dept_name << endl
             << designation << endl;
    }
};

int main()
{
    Employee e;
}