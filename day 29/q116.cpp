#include <iostream>
#include <string>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
};

int main()
{
    Item item[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (count >= 100)
            {
                cout << "Inventory is full.\n";
                break;
            }

            cout << "Enter Item ID: ";
            cin >> item[count].id;

            cin.ignore();

            cout << "Enter Item Name: ";
            getline(cin, item[count].name);

            cout << "Enter Quantity: ";
            cin >> item[count].quantity;

            cout << "Enter Price: ";
            cin >> item[count].price;

            count++;

            cout << "Item added successfully.\n";
            break;
        }

        case 2:
        {
            if (count == 0)
            {
                cout << "No items available.\n";
                break;
            }

            cout << "\nID\tName\tQuantity\tPrice\n";

            for (int i = 0; i < count; i++)
            {
                cout << item[i].id << "\t"
                     << item[i].name << "\t"
                     << item[i].quantity << "\t\t"
                     << item[i].price << endl;
            }
            break;
        }

        case 3:
        {
            int id, found = 0;

            cout << "Enter Item ID to search: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (item[i].id == id)
                {
                    cout << "\nItem Found\n";
                    cout << "ID : " << item[i].id << endl;
                    cout << "Name : " << item[i].name << endl;
                    cout << "Quantity : " << item[i].quantity << endl;
                    cout << "Price : " << item[i].price << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Item not found.\n";

            break;
        }

        case 4:
        {
            int id, found = 0;

            cout << "Enter Item ID: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (item[i].id == id)
                {
                    cout << "Enter New Quantity: ";
                    cin >> item[i].quantity;
                    cout << "Quantity Updated.\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Item not found.\n";

            break;
        }

        case 5:
        {
            int id, pos = -1;

            cout << "Enter Item ID to delete: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (item[i].id == id)
                {
                    pos = i;
                    break;
                }
            }

            if (pos == -1)
            {
                cout << "Item not found.\n";
            }
            else
            {
                for (int i = pos; i < count - 1; i++)
                    item[i] = item[i + 1];

                count--;
                cout << "Item deleted successfully.\n";
            }

            break;
        }

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}