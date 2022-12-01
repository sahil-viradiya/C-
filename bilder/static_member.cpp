#include <iostream>

using namespace std;

class State
{
private:
    string village_name;
    string Ta_name;
    string Dist_name;

public:
    static string state_name;
    // static function
    static void setStatic_name(string state_name)
    {
        state_name = state_name;
    }
    string getVillage_name()
    {
        return this->village_name;
    }

    void setVillage_name(string village_name)
    {
        this->village_name = village_name;
    }

    string getTa_name()
    {
        return this->Ta_name;
    }

    void setTa_name(string Ta_name)
    {
        this->Ta_name = Ta_name;
    }

    string getDist_name()
    {
        return this->Dist_name;
    }

    void setDist_name(string Dist_name)
    {
        this->Dist_name = Dist_name;
    }
};

string State ::state_name = "Gujrat";

int main(){
    State s1;
    s1.setDist_name("rajkot");
    s1.setTa_name("jetpur");
    s1.setVillage_name("Umrali");

    cout<<"State is : "<<s1.state_name<<endl;
    cout<<s1.getDist_name()<<endl;
    cout<<s1.getTa_name()<<endl;
    cout<<s1.getVillage_name()<<endl;

}