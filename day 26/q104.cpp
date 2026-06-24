#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "Q1. Capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n";
    cin >> ans;
    if (ans == 1) score++;

    cout << "\nQ2. 5 + 7 = ?\n";
    cout << "1. 10\n2. 12\n3. 14\n4. 15\n";
    cin >> ans;
    if (ans == 2) score++;

    cout << "\nQ3. C++ is a?\n";
    cout << "1. Operating System\n2. Language\n3. Browser\n4. Database\n";
    cin >> ans;
    if (ans == 2) score++;

    cout << "\nYour Score = " << score << "/3\n";

    return 0;
}