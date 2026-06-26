#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, roll, i;
    bool found;

    do
    {
        cout << "\n====== Student Record Management System ======\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[n].rollNo;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, s[n].name);

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student Record Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "\nNo Records Found.\n";
            }
            else
            {
                cout << "\nStudent Records\n";
                cout << "----------------------------------------\n";

                for (i = 0; i < n; i++)
                {
                    cout << "Roll No : " << s[i].rollNo << endl;
                    cout << "Name    : " << s[i].name << endl;
                    cout << "Marks   : " << s[i].marks << endl;
                    cout << "----------------------------------------\n";
                }
            }
            break;

        case 3:
            if (n == 0)
            {
                cout << "\nNo Records Found.\n";
                break;
            }

            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    cout << "\nRecord Found\n";
                    cout << "Roll No : " << s[i].rollNo << endl;
                    cout << "Name    : " << s[i].name << endl;
                    cout << "Marks   : " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found.\n";

            break;

        case 4:
            if (n == 0)
            {
                cout << "\nNo Records Found.\n";
                break;
            }

            cout << "Enter Roll Number to Delete: ";
            cin >> roll;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    n--;
                    found = true;
                    cout << "Record Deleted Successfully.\n";
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found.\n";

            break;

        case 5:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice.\n";
        }

    } while (choice != 5);

    return 0;
}