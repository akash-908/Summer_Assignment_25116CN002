#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000, amount;

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully.\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash.\n";
                } else {
                    cout << "Insufficient Balance.\n";
                }
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while (choice != 4);

    return 0;
}