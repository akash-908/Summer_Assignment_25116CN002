#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    int id;
    string name;
    string phone;
    string email;
};

int main()
{
    Contact c[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n====== Contact Management System ======\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Update Contact\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Contact ID: ";
                cin >> c[n].id;

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, c[n].name);

                cout << "Enter Phone Number: ";
                getline(cin, c[n].phone);

                cout << "Enter Email: ";
                getline(cin, c[n].email);

                n++;
                cout << "Contact Added Successfully.\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Contacts Available.\n";
                }
                else
                {
                    cout << "\n------ Contact List ------\n";

                    for(i = 0; i < n; i++)
                    {
                        cout << "\nContact ID : " << c[i].id;
                        cout << "\nName       : " << c[i].name;
                        cout << "\nPhone      : " << c[i].phone;
                        cout << "\nEmail      : " << c[i].email;
                        cout << "\n--------------------------\n";
                    }
                }
                break;

            case 3:
                cout << "Enter Contact ID to Search: ";
                cin >> id;

                found = false;

                for(i = 0; i < n; i++)
                {
                    if(c[i].id == id)
                    {
                        cout << "\nContact Found\n";
                        cout << "Name  : " << c[i].name << endl;
                        cout << "Phone : " << c[i].phone << endl;
                        cout << "Email : " << c[i].email << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Contact Not Found.\n";

                break;

            case 4:
                cout << "Enter Contact ID to Delete: ";
                cin >> id;

                found = false;

                for(i = 0; i < n; i++)
                {
                    if(c[i].id == id)
                    {
                        for(int j = i; j < n - 1; j++)
                        {
                            c[j] = c[j + 1];
                        }

                        n--;
                        found = true;

                        cout << "Contact Deleted Successfully.\n";
                        break;
                    }
                }

                if(!found)
                    cout << "Contact Not Found.\n";

                break;

            case 5:
                cout << "Enter Contact ID to Update: ";
                cin >> id;

                found = false;

                for(i = 0; i < n; i++)
                {
                    if(c[i].id == id)
                    {
                        cin.ignore();

                        cout << "Enter New Name: ";
                        getline(cin, c[i].name);

                        cout << "Enter New Phone Number: ";
                        getline(cin, c[i].phone);

                        cout << "Enter New Email: ";
                        getline(cin, c[i].email);

                        cout << "Contact Updated Successfully.\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Contact Not Found.\n";

                break;

            case 6:
                cout << "Program Closed.\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while(choice != 6);

    return 0;
}