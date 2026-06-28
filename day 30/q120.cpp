#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

Student s[100];
int total = 0;

void addStudent()
{
    cout << "\nEnter Roll No: ";
    cin >> s[total].roll;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s[total].name);

    cout << "Enter Marks: ";
    cin >> s[total].marks;

    total++;
    cout << "Record Added Successfully.\n";
}

void displayStudents()
{
    if (total == 0)
    {
        cout << "\nNo Records Found.\n";
        return;
    }

    cout << "\nRoll\tName\tMarks\n";

    for (int i = 0; i < total; i++)
    {
        cout << s[i].roll << "\t"
             << s[i].name << "\t"
             << s[i].marks << endl;
    }
}

void searchStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll No: ";
    cin >> roll;

    for (int i = 0; i < total; i++)
    {
        if (s[i].roll == roll)
        {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << s[i].roll << endl;
            cout << "Name    : " << s[i].name << endl;
            cout << "Marks   : " << s[i].marks << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record Not Found.\n";
}

void updateMarks()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll No: ";
    cin >> roll;

    for (int i = 0; i < total; i++)
    {
        if (s[i].roll == roll)
        {
            cout << "Enter New Marks: ";
            cin >> s[i].marks;
            cout << "Marks Updated Successfully.\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record Not Found.\n";
}

void deleteStudent()
{
    int roll, pos = -1;

    cout << "\nEnter Roll No: ";
    cin >> roll;

    for (int i = 0; i < total; i++)
    {
        if (s[i].roll == roll)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "Record Not Found.\n";
        return;
    }

    for (int i = pos; i < total - 1; i++)
        s[i] = s[i + 1];

    total--;
    cout << "Record Deleted Successfully.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== MINI PROJECT ==========\n";
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
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateMarks();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}