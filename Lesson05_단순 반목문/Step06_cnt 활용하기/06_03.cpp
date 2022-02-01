#include <iostream>
using namespace std;

int main() {

    int n, a = 0, b = 0, c = 0;
    cin >> n;

    c = (n/12);
    b = (n/3) - c;
    a = (n/2) - (n/6);

    cout << a << " " << b << " " << c;
    return 0;

}
