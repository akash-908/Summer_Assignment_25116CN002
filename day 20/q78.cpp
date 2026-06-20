#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter order of matrix: ";
    cin>>n;

    int a[10][10];
    bool flag=true;

    cout<<"Enter matrix:\n";

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=false;
                break;
            }
        }
    }

    if(flag)
        cout<<"Symmetric Matrix";
    else
        cout<<"Not a Symmetric Matrix";

    return 0;
}