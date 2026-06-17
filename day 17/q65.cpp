#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    int a[n1];

    cout << "Enter elements: ";
    for(int i=0;i<n1;i++)
        cin>>a[i];

    cout<<"Enter size of second array: ";
    cin>>n2;

    int b[n2];

    cout<<"Enter elements: ";
    for(int i=0;i<n2;i++)
        cin>>b[i];

    int c[n1+n2];

    for(int i=0;i<n1;i++)
        c[i]=a[i];

    for(int i=0;i<n2;i++)
        c[n1+i]=b[i];

    cout<<"Merged array:\n";

    for(int i=0;i<n1+n2;i++)
        cout<<c[i]<<" ";
}