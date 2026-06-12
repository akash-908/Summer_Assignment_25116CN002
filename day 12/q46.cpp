#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int temp = n, sum = 0;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}