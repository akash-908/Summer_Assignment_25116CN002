#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
    bool issued;
};

int main()
{
    Book b[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Book ID: ";
            cin >> b[n].bookId;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, b[n].title);

            cout << "Enter Author Name: ";
            getline(cin, b[n].author);

            b[n].issued = false;
            n++;

            cout << "Book Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Books Available.\n";
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    cout << "\nBook ID : " << b[i].bookId;
                    cout << "\nTitle   : " << b[i].title;
                    cout << "\nAuthor  : " << b[i].author;
                    cout << "\nStatus  : ";

                    if (b[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";

                    cout << "\n---------------------------\n";
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to Issue: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (b[i].bookId == id)
                {
                    if (!b[i].issued)
                    {
                        b[i].issued = true;
                        cout << "Book Issued Successfully.\n";
                    }
                    else
                    {
                        cout << "Book Already Issued.\n";
                    }
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found.\n";

            break;

        case 4:
            cout << "Enter Book ID to Return: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (b[i].bookId == id)
                {
                    if (b[i].issued)
                    {
                        b[i].issued = false;
                        cout << "Book Returned Successfully.\n";
                    }
                    else
                    {
                        cout << "Book is Already Available.\n";
                    }

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found.\n";

            break;

        case 5:
            cout << "Enter Book ID to Search: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++)
            {
                if (b[i].bookId == id)
                {
                    cout << "\nBook Found\n";
                    cout << "Title  : " << b[i].title << endl;
                    cout << "Author : " << b[i].author << endl;
                    cout << "Status : ";

                    if (b[i].issued)
                        cout << "Issued\n";
                    else
                        cout << "Available\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found.\n";

            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}