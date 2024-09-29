#include <iostream>
using namespace std;

int main() {
    int t;  
    cout << "Enter number of test cases: ";
    cin >> t;

    for (int i = 0; i < t; i++) {
        int N;
        cin >> N;

        if (N == 0) {
            cout << "0";  
        } else {
            while (N > 0) {
                cout << N % 10;  
                N /= 10;         
                if (N > 0) {
                    cout << " "; 
                }
            }
        }
        
        cout << endl;  
    }

    return 0;
}