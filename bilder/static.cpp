#include <iostream>

using namespace std;

class HighSchool
{
private:
    int id;
    string stu_name;
    int stu_roll_no;
    int stu_std;
    int stu_age;
    string stu_contect;
    string stu_address;

public:
    static string school_name;
    // Static
    static void setSchool_name(string school_name)
    {
        school_name = school_name;
    }

    int getId()
    {
        return id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    string getStu_name()
    {
        return this->stu_name;
    }

    void setStu_name(string stu_name)
    {
        this->stu_name = stu_name;
    }

    int getStu_roll_no()
    {
        return this->stu_roll_no;
    }

    void setStu_roll_no(int stu_roll_no)
    {
        this->stu_roll_no = stu_roll_no;
    }

    int getStu_std()
    {
        return this->stu_std;
    }

    void setStu_std(int stu_std)
    {
        this->stu_std = stu_std;
    }

    int getStu_age()
    {
        return this->stu_age;
    }

    void setStu_age(int stu_age)
    {
        this->stu_age = stu_age;
    }

    string getStu_contect()
    {
        return this->stu_contect;
    }

    void setStu_contect(string stu_contect)
    {
        this->stu_contect = stu_contect;
    }

    string getStu_address()
    {
        return this->stu_address;
    }

    void setStu_address(string stu_address)
    {
        this->stu_address = stu_address;
    }
};
// collage class
class Collage
{
private:
    int id;
    string stu_name;
    int stu_roll_no;
    int stu_std;
    int stu_age;
    string stu_contect;
    string stu_address;

public:
    static string Collage_name;
    // Static
    // using function
    // static void setCollage_name(string Collage_name)
    // {
    //     Collage_name = Collage_name;
    // }

    int getId()
    {
        return id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    string getStu_name()
    {
        return this->stu_name;
    }

    void setStu_name(string stu_name)
    {
        this->stu_name = stu_name;
    }

    int getStu_roll_no()
    {
        return this->stu_roll_no;
    }

    void setStu_roll_no(int stu_roll_no)
    {
        this->stu_roll_no = stu_roll_no;
    }

    int getStu_std()
    {
        return this->stu_std;
    }

    void setStu_std(int stu_std)
    {
        this->stu_std = stu_std;
    }

    int getStu_age()
    {
        return this->stu_age;
    }

    void setStu_age(int stu_age)
    {
        this->stu_age = stu_age;
    }

    string getStu_contect()
    {
        return this->stu_contect;
    }

    void setStu_contect(string stu_contect)
    {
        this->stu_contect = stu_contect;
    }

    string getStu_address()
    {
        return this->stu_address;
    }

    void setStu_address(string stu_address)
    {
        this->stu_address = stu_address;
    }
};
string HighSchool::school_name = "Sarvoday";
string Collage::Collage_name = "SomLalit";
int main()
{
    HighSchool h1;
    h1.setId(101);
    h1.setStu_name("sahil");
    h1.setStu_roll_no(57);
    h1.setStu_std(12);
    h1.setStu_contect("9725558828");
    h1.setStu_address("Swastik");

    cout << h1.getId() << endl;
    cout << h1.getStu_name() << endl;
    cout << h1.getStu_roll_no() << endl;
    cout << h1.getStu_std() << endl;
    cout << h1.getStu_contect() << endl;
    cout << h1.getStu_address() << endl;
    // h1.school_name="Sarvoday";
    cout << h1.school_name;
    cout << endl
         << endl;

    Collage c1;
    c1.setId(101);
    c1.setStu_name("sahil");
    c1.setStu_roll_no(57);
    c1.setStu_std(12);
    c1.setStu_contect("9725558828");
    c1.setStu_address("Swastik");

    cout << c1.getId() << endl;
    cout << c1.getStu_name() << endl;
    cout << c1.getStu_roll_no() << endl;
    cout << c1.getStu_std() << endl;
    cout << c1.getStu_contect() << endl;
    cout << c1.getStu_address() << endl;
    cout << c1.Collage_name;
}
