#include <iostream>
using namespace std;

int main()
{
    char str[100], result[100];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    cout << "String after removing spaces: " << result;

    return 0;
}