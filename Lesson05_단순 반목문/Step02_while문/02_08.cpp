#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    while (a <= b) {
        if (a % 2 == 0) {
            cout << a << " ";
        }

        else {
            cout << a + 1 << " ";
        }
        a += 2;
    }

    return 0;
}
