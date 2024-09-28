#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int n, x;
    cout << "Enter apartment number (n) and apartments per floor (x): ";
    cin >> n >> x;
    
    if (n <= 2) {
       
        cout << 1 << endl;
    } else {
        int floor = 1 + ceil((n - 2) / (double)x);
        cout << floor << endl;
    }
    
    return 0;
}