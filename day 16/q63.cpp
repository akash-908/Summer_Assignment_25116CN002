#include <iostream>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << arr[i] << " " << arr[j];
                found = true;
                break;
            }
        }

        if(found) {
            break;
        }
    }

    if(!found) {
        cout << "No Pair Found";
    }

    return 0;
}