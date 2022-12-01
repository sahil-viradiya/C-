#include <iostream>

using namespace std;

class Bank
{

private:
    int acno;
    string name;
    double num;
    string mail;
    long balance = 200000;

public:
    void StaffDetaiils()
    {
        cout << "Enter Name of staff\t\t: ";
        cin >> name;
        cout << "Enter Account Number of Staff\t: ";
        cin >> acno;
        cout << "Enter Phone Number of Staff\t: ";
        cin >> num;
        cout << "Enter  E-mail id of Staff\t: ";
        cin >> mail;
    }

    void deposit()
    {
        long amt;
        cout << "Deposite the money :"
             << "\n\n";
        cin >> amt;

        cout << "You Actual Amount Is : " << balance << endl;

        cout << "Congrates Your Amount Has Deposit Successfully."
             << "\n";
        balance = balance + amt;
        cout << "Your Account Balance is :" << balance;
    }

    void Transfer()
    {
        long amt;
        cout << "Transfer the money :"
             << "\n\n";
        cin >> amt;
        cout << "Your Actual Amount Is : " << balance << endl;
        if (amt <= balance)
        {
            cout << "Congrates Your Amount Has Transfer Successfully."
                 << "\n";
            balance = balance - amt;
            cout << "Your Account Balance is :" << balance;
        }
        else
            cout << "Less Balance..." << endl;
    }

    void Withdrawal()
    {
        long amt;
        cout << "Withdraw the money ";
        cin >> amt;
        cout << "\n\n";
        cout << "Your Actual Amount Is : " << balance << endl;
        if (amt <= balance)
        {
            cout << "Congrates Your Amount Has Withdraw Successfully."
                 << "\n";
            balance = balance - amt;
            cout << "Your Account Balance is :" << balance;
        }
        else
            cout << "Less Balance..." << endl;
    }
};

int main()
{
    Bank b;

    char ch, c;
    cout << "\t\t\t\t\t -: BANK MANAGMENT SYSTEM :-"
         << "\n";
    cout << "\t\t\t\t\t-: DESIGNED N PROGRAMED BY :-"
         << "\n";
    cout << "\t\t\t\t\t      KHUSHI G BELADIYA   "
         << "\n\n";
    cout << "\t\t\t\t\t        -: Trainer :-"
         << "\n";
    cout << "\t\t\t\t\t       ASHISH SOLANKI "
         << "\n\n";
    cout << "\t\t\t\t     Press Any Key N Enter To Continue..."
         << "\n\n";
    cin >> ch;

    cout << "\t\t\t-: Press A to log in as Administrator Or S to Log in as Staff :-"
         << "\n\n";
    cin >> c;

    if (c == 'S')
    {
        cout << "\t\t\t\t\t\t-: WELCOME AS STAFF :-"
             << "\n\n";
        b.StaffDetaiils();
        cout << "\n\n";

        cout << "\t\t\t\tPress [1] to deposite the money:" << endl;
        cout << "\t\t\t\tPress [2] to transfer the money:" << endl;
        cout << "\t\t\t\tPress [3] to withdraw the money:" << endl;
        int num;
        cin >> num;

        switch (num)
        {
        case 1:
            b.deposit();
            break;
        case 2:
            b.Transfer();
            break;
        case 3:
            b.Withdrawal();
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    }
    if (c == 'A')
    {
        cout << "INVALID..... \n ONLY FOR ADMIN MEMBERS:"
             << "\n";
    }
}
