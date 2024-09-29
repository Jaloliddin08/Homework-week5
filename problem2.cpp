#include <iostream>
using namespace std;

int main() {
    int t;  
    cout << "Enter number of test cases: ";
    cin >> t;

    for (int i = 0; i < t; i++) {
        int N;
        cin >> N;

        while (N > 0) {
            cout << N % 10;  
            N /= 10;         
            if (N > 0) {
                cout << " "; 
            }
        }
        
        if (N == 0 && i == t - 1) {
            cout << " 0";
        }

        cout << endl;  
    }

    return 0;
}