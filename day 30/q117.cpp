#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    int age;
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Roll No: ";
            cin >> s[n].roll;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, s[n].name);

            cout << "Enter Age: ";
            cin >> s[n].age;

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "Student Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Records Found.\n";
                break;
            }

            cout << "\nRoll\tName\tAge\tMarks\n";
            for (int i = 0; i < n; i++)
            {
                cout << s[i].roll << "\t"
                     << s[i].name << "\t"
                     << s[i].age << "\t"
                     << s[i].marks << endl;
            }
            break;

        case 3:
        {
            int roll, found = 0;
            cout << "Enter Roll No: ";
            cin >> roll;

            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "\nRecord Found\n";
                    cout << "Name : " << s[i].name << endl;
                    cout << "Age : " << s[i].age << endl;
                    cout << "Marks : " << s[i].marks << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found.\n";
            break;
        }

        case 4:
        {
            int roll, found = 0;
            cout << "Enter Roll No: ";
            cin >> roll;

            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    cout << "Enter New Marks: ";
                    cin >> s[i].marks;
                    cout << "Record Updated.\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found.\n";
            break;
        }

        case 5:
        {
            int roll, pos = -1;
            cout << "Enter Roll No: ";
            cin >> roll;

            for (int i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    pos = i;
                    break;
                }
            }

            if (pos == -1)
            {
                cout << "Student Not Found.\n";
            }
            else
            {
                for (int i = pos; i < n - 1; i++)
                    s[i] = s[i + 1];

                n--;
                cout << "Record Deleted.\n";
            }
            break;
        }

        case 6:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}