#include <iostream>
using namespace std;

int main() {
    int t;  
    cin >> t;

    for (int i = 0; i < t; i++) {
        int N;
        cin >> N;

        if (N == 0) {
            cout << "0" << endl;  
            continue; 
        }

        bool first_digit = true; 
        while (N > 0) {
            if (!first_digit) {
                cout << " ";  
            }
            cout << N % 10;  
            N /= 10;        
            first_digit = false;
        }
        cout << endl; 
    }

    return 0;
}