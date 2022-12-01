#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int id;
    string name;
    string role;
    int salary;
    int experiance;
    string address;
    string email;
    int contect;

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }

    // name
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }

    // role

    void setRole(string role)
    {
        this->role = role;
    }
    string getRole()
    {
        return role;
    }

    // salary
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }

    // experience
    void setExperience(int experiance)
    {
        this->experiance = experiance;
    }
    int getExperience()
    {
        return experiance;
    }

    // address
    void setAddress(string address)
    {
        this->address = address;
    }

    string getAddress()
    {
        return address;
    }

    // Email
    void setEmail(string email)
    {
        this->email = email;
    }
    string getEmail()
    {
        return email;
    }
    // contect
    void setContect(int contect)
    {
        this->contect = contect;
    }
    int getContect()
    {
        return contect;
    }
};

int main()
{

    Employee emp[100];
    int n;
    int id;
    string name;
    string role;
    int salary;
    int experiance;
    string address;
    string email;
    int contect;
    
    cout<<"how many print of student data";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Emp id : ";
        cin >> id;
        emp[i].setId(id);
        // cout << emp[i].getId(); // emp[i].setId();

        cout << "Enter Emp name : ";
        cin >> name;
        emp[i].setName(name);

        cout << "Enter Emp role : ";
        cin >> role;
        emp[i].setRole(role);

        cout << "Enter Emp Salary : ";
        cin >> salary;
        emp[i].setSalary(salary);

        cout << "Enter emp experience : ";
        cin >> experiance;
        emp[i].setExperience(experiance);

        fflush(stdin);
        cout << "Enter Emp Address  :";
        cin >> address;
        emp[i].setAddress(address);

        cout << "Enter Emp Email :";
        cin >> email;
        emp[i].setEmail(email);

        cout << "enter Emp Contect : ";
        cin >> contect;
        emp[i].setContect(contect);

        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << emp[i].getId();
        cout<<endl;
        cout << emp[i].getName();
        cout<<endl;
        cout << emp[i].getRole();
        cout<<endl;
        cout << emp[i].getSalary();
        cout<<endl;
        cout << emp[i].getExperience();
        cout<<endl;
        cout << emp[i].getAddress();
        cout<<endl;
        cout << emp[i].getEmail();
        cout<<endl;
        cout << emp[i].getContect();
    }

    return 0;
}