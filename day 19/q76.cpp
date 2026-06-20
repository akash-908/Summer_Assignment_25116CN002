#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter order of square matrix: ";
    cin>>n;

    int a[10][10];
    int sum=0;

    cout<<"Enter matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    for(int i=0;i<n;i++)
        sum+=a[i][i];

    cout<<"Diagonal Sum = "<<sum;

    return 0;
}