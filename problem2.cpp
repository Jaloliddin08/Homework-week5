#include <iostream>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int number;
    while (n>0){
        cin >> number;
        while (number > 0){
          cout << number % 10 << " ";
          number = number - number % 10;
          number = number / 10;
        }
        cout << endl;
        n--;
    }
    return 0;
}