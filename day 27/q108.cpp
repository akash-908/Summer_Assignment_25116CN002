#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int rollNo;
    string name;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "========== Marksheet Generation System ==========\n\n";

    cout << "Enter Roll Number : ";
    cin >> rollNo;

    cin.ignore();

    cout << "Enter Student Name : ";
    getline(cin, name);

    cout << "\nEnter Marks of 5 Subjects (Out of 100)\n";

    cout << "Subject 1 : ";
    cin >> m1;

    cout << "Subject 2 : ";
    cin >> m2;

    cout << "Subject 3 : ";
    cin >> m3;

    cout << "Subject 4 : ";
    cin >> m4;

    cout << "Subject 5 : ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n\n============= MARKSHEET =============\n";

    cout << "Roll Number : " << rollNo << endl;
    cout << "Student Name: " << name << endl;

    cout << "\n------------------------------------------\n";
    cout << left << setw(15) << "Subject"
         << setw(10) << "Marks" << endl;
    cout << "------------------------------------------\n";

    cout << left << setw(15) << "Subject 1" << setw(10) << m1 << endl;
    cout << left << setw(15) << "Subject 2" << setw(10) << m2 << endl;
    cout << left << setw(15) << "Subject 3" << setw(10) << m3 << endl;
    cout << left << setw(15) << "Subject 4" << setw(10) << m4 << endl;
    cout << left << setw(15) << "Subject 5" << setw(10) << m5 << endl;

    cout << "------------------------------------------\n";

    cout << "Total Marks : " << total << " / 500" << endl;
    cout << "Percentage  : " << fixed << setprecision(2)
         << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    if (grade == 'F')
        cout << "Result      : FAIL" << endl;
    else
        cout << "Result      : PASS" << endl;

    return 0;
}