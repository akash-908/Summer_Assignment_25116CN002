
#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int pos = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";

    return 0;
}