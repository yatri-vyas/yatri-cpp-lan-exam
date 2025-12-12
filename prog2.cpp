#include <iostream>

using namespace std;

class BankAccount
{
private:
    double balance;

protected:
    int accountnumber;
    string ownername;    

public:
    BankAccount()
    {
        balance = 0;
    }

    void credit(double amount)
    {
        balance += amount;
        cout << "Amount credited."<<endl;
    }

    void debit(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance!"<<endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount debited."<<endl;
        }
    }

    void displaybalance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    BankAccount bank;
    double amount;
    int choice;

    do
    {
        cout << "MENU:" << endl
             << "1. Credit" << endl
             << "2. Debit" << endl
             << "3. Display Balance" << endl
             << "4. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount: ";
            cin >> amount;
            bank.credit(amount);
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            bank.debit(amount);
            break;

        case 3:
            bank.displaybalance();
            break;

        case 4:
            cout << "Exit";
            break;

        default:
            cout << "Invalid choice!";
        }
    } while (choice != 4);

    return 0;
}
