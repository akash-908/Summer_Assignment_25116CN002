#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int visited[256] = {0};

    cout << "String after removing duplicates: ";

    for (int i = 0; i < s.length(); i++) {
        if (visited[(int)s[i]] == 0) {
            cout << s[i];
            visited[(int)s[i]] = 1;
        }
    }

    return 0;
}