#include <iostream>
#include <string>
using namespace std;

struct Salary
{
    int empId;
    string name;
    float basicSalary;
    float hra;
    float da;
    float deduction;
    float netSalary;
};

int main()
{
    Salary s[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n====== Salary Management System ======\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display Salary Records\n";
        cout << "3. Search Salary Record\n";
        cout << "4. Delete Salary Record\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> s[n].empId;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, s[n].name);

            cout << "Enter Basic Salary: ";
            cin >> s[n].basicSalary;

            cout << "Enter HRA: ";
            cin >> s[n].hra;

            cout << "Enter DA: ";
            cin >> s[n].da;

            cout << "Enter Deduction: ";
            cin >> s[n].deduction;

            s[n].netSalary = s[n].basicSalary + s[n].hra + s[n].da - s[n].deduction;

            n++;

            cout << "Salary Record Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo Salary Records Available.\n";
            }
            else
            {
                cout << "\n===== Salary Records =====\n";

                for (i = 0; i < n; i++)
                {
                    cout << "\nEmployee ID : " << s[i].empId;
                    cout << "\nName        : " << s[i].name;
                    cout << "\nBasic Salary: " << s[i].basicSalary;
                    cout << "\nHRA         : " << s[i].hra;
                    cout << "\nDA          : " << s[i].da;
                    cout << "\nDeduction   : " << s[i].deduction;
                    cout << "\nNet Salary  : " << s[i].netSalary;
                    cout << "\n-------------------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (s[i].empId == id)
                {
                    cout << "\nRecord Found\n";
                    cout << "Employee ID : " << s[i].empId << endl;
                    cout << "Name        : " << s[i].name << endl;
                    cout << "Net Salary  : " << s[i].netSalary << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Record Not Found.\n";

            break;

        case 4:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (s[i].empId == id)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    n--;
                    found = true;

                    cout << "Salary Record Deleted Successfully.\n";
                    break;
                }
            }

            if (!found)
                cout << "Record Not Found.\n";

            break;

        case 5:
            cout << "Program Closed.\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}