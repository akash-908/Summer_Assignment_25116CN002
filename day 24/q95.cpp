#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter sentence: ";
    getline(cin, s);

    string word = "", longest = "";

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (word.length() > longest.length())
                longest = word;
            word = "";
        }
        else
            word += s[i];
    }

    cout << "Longest word: " << longest;

    return 0;
}