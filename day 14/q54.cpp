#include <iostream>
using namespace std;

int main()
{
    int n, x, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element: ";
    cin >> x;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}