#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a single-digit number: ";
    cin >> num;

    for (int i = num; i >= 1; i--) {
    
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int k = 0; k < num - i; k++) {
            cout << "  "; 
        }

        for (int l = i; l >= 1; l--) {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}