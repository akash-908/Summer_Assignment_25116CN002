#include <iostream>
using namespace std;

int main()
{
    int r,c;

    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    int a[10][10];

    cout<<"Enter matrix:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];

    cout<<"Transpose Matrix:\n";

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
            cout<<a[j][i]<<" ";
        cout<<endl;
    }

    return 0;
}