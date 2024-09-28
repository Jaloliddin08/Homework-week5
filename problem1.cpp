#include <iostream>
using namespace std;

void generate_pattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        cout << " ";
        
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter a single-digit number: ";
    cin >> n;
    
    generate_pattern(n);
    
    return 0;
}