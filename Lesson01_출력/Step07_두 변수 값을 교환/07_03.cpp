#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 6;
    int c = 7;

    int _a = a;
    int _b = b;
    int _c = c;

    b = a;
    c = _b;
    a = _c;

    cout << a << endl << b << endl << c;
    return 0;
}
