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

        cout << N % 10;
        N /= 10;  

        while (N > 0) {
            cout << " " << N % 10;  
            N /= 10; 
        }

        cout << endl;  
    }

    return 0;
}