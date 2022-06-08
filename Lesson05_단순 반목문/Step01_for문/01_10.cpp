#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a % 2 != 0) {
        for (int i = a; i >= b; i -= 2) {
            cout << i << " ";
        }
    }

    else {
        for (int j = a; j >= b; j -= 2) {
            cout << j-1 << " ";
        }
    }

    return 0;
}
