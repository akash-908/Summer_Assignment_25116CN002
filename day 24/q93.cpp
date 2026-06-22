#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Rotation";
        return 0;
    }

    string temp = s1 + s1;

    if (temp.find(s2) != string::npos)
        cout << "Rotation";
    else
        cout << "Not Rotation";

    return 0;
}