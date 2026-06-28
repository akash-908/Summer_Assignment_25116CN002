#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    int quantity;
};

int main()
{
    Book book[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Book ID: ";
            cin >> book[n].id;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, book[n].title);

            cout << "Enter Author Name: ";
            getline(cin, book[n].author);

            cout << "Enter Quantity: ";
            cin >> book[n].quantity;

            n++;
            cout << "Book Added Successfully.\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Books Available.\n";
                break;
            }

            cout << "\nID\tTitle\tAuthor\tQuantity\n";
            for (int i = 0; i < n; i++)
            {
                cout << book[i].id << "\t"
                     << book[i].title << "\t"
                     << book[i].author << "\t"
                     << book[i].quantity << endl;
            }
            break;

        case 3:
        {
            int id, found = 0;
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    cout << "\nBook Found\n";
                    cout << "Title : " << book[i].title << endl;
                    cout << "Author : " << book[i].author << endl;
                    cout << "Quantity : " << book[i].quantity << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found.\n";
            break;
        }

        case 4:
        {
            int id, found = 0;
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    found = 1;

                    if (book[i].quantity > 0)
                    {
                        book[i].quantity--;
                        cout << "Book Issued Successfully.\n";
                    }
                    else
                    {
                        cout << "Book Not Available.\n";
                    }
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found.\n";

            break;
        }

        case 5:
        {
            int id, found = 0;
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    book[i].quantity++;
                    cout << "Book Returned Successfully.\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found.\n";

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