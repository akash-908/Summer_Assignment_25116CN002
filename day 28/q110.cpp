#include <iostream>
#include <string>
using namespace std;

struct Account
{
    int accNo;
    string name;
    float balance;
};

int main()
{
    Account acc[100];
    int n = 0, choice, no, i;
    float amount;
    bool found;

    do
    {
        cout << "\n====== Bank Account Management System ======\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Search Account\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Account Number: ";
                cin >> acc[n].accNo;

                cin.ignore();

                cout << "Enter Account Holder Name: ";
                getline(cin, acc[n].name);

                cout << "Enter Initial Balance: ";
                cin >> acc[n].balance;

                n++;
                cout << "Account Created Successfully.\n";
                break;

            case 2:
                if(n==0)
                {
                    cout << "No Accounts Available.\n";
                }
                else
                {
                    cout << "\n----- Account Details -----\n";
                    for(i=0;i<n;i++)
                    {
                        cout << "\nAccount No : " << acc[i].accNo;
                        cout << "\nName       : " << acc[i].name;
                        cout << "\nBalance    : " << acc[i].balance;
                        cout << "\n---------------------------\n";
                    }
                }
                break;

            case 3:
                cout << "Enter Account Number: ";
                cin >> no;

                found = false;

                for(i=0;i<n;i++)
                {
                    if(acc[i].accNo==no)
                    {
                        cout << "Enter Deposit Amount: ";
                        cin >> amount;

                        acc[i].balance += amount;

                        cout << "Amount Deposited Successfully.\n";
                        cout << "Current Balance: " << acc[i].balance << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found.\n";

                break;

            case 4:
                cout << "Enter Account Number: ";
                cin >> no;

                found = false;

                for(i=0;i<n;i++)
                {
                    if(acc[i].accNo==no)
                    {
                        cout << "Enter Withdrawal Amount: ";
                        cin >> amount;

                        if(amount <= acc[i].balance)
                        {
                            acc[i].balance -= amount;

                            cout << "Amount Withdrawn Successfully.\n";
                            cout << "Remaining Balance: " << acc[i].balance << endl;
                        }
                        else
                        {
                            cout << "Insufficient Balance.\n";
                        }

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found.\n";

                break;

            case 5:
                cout << "Enter Account Number to Search: ";
                cin >> no;

                found = false;

                for(i=0;i<n;i++)
                {
                    if(acc[i].accNo==no)
                    {
                        cout << "\nAccount Found\n";
                        cout << "Account No : " << acc[i].accNo << endl;
                        cout << "Name       : " << acc[i].name << endl;
                        cout << "Balance    : " << acc[i].balance << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found.\n";

                break;

            case 6:
                cout << "Program Closed.\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    }while(choice!=6);

    return 0;
}