#include <iostream>
using namespace std;

int main()
{
    int arr[100], n = 0;
    int choice;

    do
    {
        cout << "\n------ ARRAY OPERATIONS ------\n";
        cout << "1. Enter Array\n";
        cout << "2. Display Array\n";
        cout << "3. Find Sum\n";
        cout << "4. Find Maximum\n";
        cout << "5. Find Minimum\n";
        cout << "6. Search Element\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter number of elements: ";
            cin >> n;

            cout << "Enter elements:\n";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            break;

        case 2:
            if (n == 0)
            {
                cout << "Array is empty.\n";
            }
            else
            {
                cout << "Array: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
            break;

        case 3:
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
                sum += arr[i];

            cout << "Sum = " << sum << endl;
            break;
        }

        case 4:
        {
            if (n == 0)
            {
                cout << "Array is empty.\n";
                break;
            }

            int max = arr[0];
            for (int i = 1; i < n; i++)
            {
                if (arr[i] > max)
                    max = arr[i];
            }

            cout << "Maximum = " << max << endl;
            break;
        }

        case 5:
        {
            if (n == 0)
            {
                cout << "Array is empty.\n";
                break;
            }

            int min = arr[0];
            for (int i = 1; i < n; i++)
            {
                if (arr[i] < min)
                    min = arr[i];
            }

            cout << "Minimum = " << min << endl;
            break;
        }

        case 6:
        {
            int key, found = -1;

            cout << "Enter element to search: ";
            cin >> key;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == key)
                {
                    found = i;
                    break;
                }
            }

            if (found != -1)
                cout << "Element found at position " << found + 1 << endl;
            else
                cout << "Element not found.\n";

            break;
        }

        case 7:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 7);

    return 0;
}