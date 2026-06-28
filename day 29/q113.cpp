#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;

    do
    {
        cout << "\n===== MENU DRIVEN CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Division by zero is not possible.\n";
            break;

        case 5:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}