#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;
    
    while (t--) {
        int N;
       
        cin >> N;
        
      
        if (N == 0) {
            cout << "0" << endl;
            continue;
        }
        
        bool firstDigit = true;
       
        while (N > 0) {
            int digit = N % 10;  
            if (!firstDigit) {
                cout << " ";  
            }
            cout << digit;
            firstDigit = false;
            N /= 10;  
        }
        cout << endl;
    }

    return 0;
}