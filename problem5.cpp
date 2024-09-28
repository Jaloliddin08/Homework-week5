#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the position N: ";
    cin >> N;

    int count = 0;  
    int current_num = 1;  
    while (true) {

        if (current_num % 3 != 0 && current_num % 10 != 3) {
            count++;  
        }

        if (count == N) {
            cout << current_num << endl;
            break;
        }
        current_num++; 
    }

    return 0;
}