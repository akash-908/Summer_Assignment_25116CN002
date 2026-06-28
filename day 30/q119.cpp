#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    string department;
    float salary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> emp[n].id;
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
                cout << "No Employee Records.\n";
                break;
            }

            cout << "\nID\tName\tDepartment\tSalary\n";
            for (int i = 0; i < n; i++)
            {
                cout << emp[i].id << "\t"
                     << emp[i].name << "\t"
                     << emp[i].department << "\t\t"
                     << emp[i].salary << endl;
            }
            break;

        case 3:
        {
            int id, found = 0;
            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "\nEmployee Found\n";
                    cout << "Name : " << emp[i].name << endl;
                    cout << "Department : " << emp[i].department << endl;
                    cout << "Salary : " << emp[i].salary << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found.\n";

            break;
        }

        case 4:
        {
            int id, found = 0;
            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "Enter New Salary: ";
                    cin >> emp[i].salary;
                    cout << "Salary Updated Successfully.\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found.\n";

            break;
        }

        case 5:
        {
            int id, pos = -1;
            cout << "Enter Employee ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    pos = i;
                    break;
                }
            }

            if (pos == -1)
            {
                cout << "Employee Not Found.\n";
            }
            else
            {
                for (int i = pos; i < n - 1; i++)
                {
                    emp[i] = emp[i + 1];
                }

                n--;
                cout << "Employee Deleted Successfully.\n";
            }

            break;
        }

        case 6:
            cout << "Program Closed.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}