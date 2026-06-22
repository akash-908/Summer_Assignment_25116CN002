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

    int maxCount = 0;
    char ch;

    for (int i = 0; i < s.length(); i++) {
        if (count[(int)s[i]] > maxCount) {
            maxCount = count[(int)s[i]];
            ch = s[i];
        }
    }

    cout << "Maximum occurring character: " << ch;
    return 0;
}