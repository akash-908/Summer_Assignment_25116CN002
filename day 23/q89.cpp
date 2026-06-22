#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int count[256] = {0};

    for (int i = 0; i < s.length(); i++)
        count[(int)s[i]]++;

    for (int i = 0; i < s.length(); i++) {
        if (count[(int)s[i]] == 1) {
            cout << "First non-repeating character: " << s[i];
            return 0;
        }
    }

    cout << "No non-repeating character found.";
    return 0;
}