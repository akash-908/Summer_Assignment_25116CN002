#include <iostream>
using namespace std;

int main()
{
    int n,m;

    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>m;
    int b[m];

    for(int i=0;i<m;i++)
        cin>>b[i];

    int c[1000];
    int k=0;

    for(int i=0;i<n;i++)
        c[k++]=a[i];

    for(int i=0;i<m;i++)
    {
        bool found=false;

        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                found=true;
                break;
            }
        }

        if(!found)
            c[k++]=b[i];
    }

    cout<<"Union:\n";

    for(int i=0;i<k;i++)
        cout<<c[i]<<" ";
}