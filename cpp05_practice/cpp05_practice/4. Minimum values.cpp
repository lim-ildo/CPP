// 4. Minimum values

#include <iostream>

using namespace std;

int main()

{
    int a, b, c;

    cout << "input numbers:";
    cin >> a >> b >> c;
    
    if (a > b) {
        if (b > c) {
            cout << "minimum number:" << c << endl;
        }
        else {
            cout << "minimum number:" << b << endl;
        }
    }
    
    else if (b > a) {
        if (a > c) {
            cout << "minimum number:" << c << endl;
        }
        else {
            cout << "minimum number:" << a << endl;
        }
    }
    else{
        if (a > b) {
            cout << "minimum number:" << b << endl;
        }
        else{
            cout << "minimum number:" << a << endl;
        }
    }

    return 0;
}