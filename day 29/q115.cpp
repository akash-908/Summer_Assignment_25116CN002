#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    string str, str2;
    int choice;

    do
    {
        cout << "\n----- STRING OPERATIONS -----\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Concatenate Another String\n";
        cout << "5. Compare With Another String\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            cout << "Enter a string: ";
            getline(cin, str);
            break;

        case 2:
            cout << "String: " << str << endl;
            break;

        case 3:
            cout << "Length = " << str.length() << endl;
            break;

        case 4:
            cout << "Enter another string: ";
            getline(cin, str2);
            cout << "Concatenated String: " << str + str2 << endl;
            break;

        case 5:
            cout << "Enter another string: ";
            getline(cin, str2);

            if (str == str2)
                cout << "Both strings are equal.\n";
            else
                cout << "Both strings are different.\n";
            break;

        case 6:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}