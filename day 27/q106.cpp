#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int empId;
    string name;
    string department;
    float salary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].empId;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Department: ";
            getline(cin, emp[n].department);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "Employee Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo Employee Records Found.\n";
            }
            else
            {
                cout << "\nEmployee Records\n";
                cout << "----------------------------------\n";

                for (i = 0; i < n; i++)
                {
                    cout << "Employee ID : " << emp[i].empId << endl;
                    cout << "Name        : " << emp[i].name << endl;
                    cout << "Department  : " << emp[i].department << endl;
                    cout << "Salary      : " << emp[i].salary << endl;
                    cout << "----------------------------------\n";
                }
            }
            break;

        case 3:
            if (n == 0)
            {
                cout << "\nNo Employee Records Found.\n";
                break;
            }

            cout << "Enter Employee ID to Search: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (emp[i].empId == id)
                {
                    cout << "\nEmployee Found\n";
                    cout << "Employee ID : " << emp[i].empId << endl;
                    cout << "Name        : " << emp[i].name << endl;
                    cout << "Department  : " << emp[i].department << endl;
                    cout << "Salary      : " << emp[i].salary << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found.\n";

            break;

        case 4:
            if (n == 0)
            {
                cout << "\nNo Employee Records Found.\n";
                break;
            }

            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (emp[i].empId == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;
                    found = true;
                    cout << "Employee Record Deleted Successfully.\n";
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found.\n";

            break;

        case 5:
            cout << "\nExiting Program...\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}