#include <iostream>
using namespace std;

int main() {
    int t, N;
    cout << "Enter the number of test cases: ";
    cin >> t;  

    for (int i = 0; i < t; i++) {
        cin >> N;  
        bool first = true; 

        while (N > 0) {
            if (!first) {
                cout << " "; 
            }
            cout << N % 10; 
            N /= 10;  
            first = false; 
        }
        cout << endl; 
    }
    
    return 0;
}