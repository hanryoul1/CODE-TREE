#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b;) {

        if (i % 2 != 0) {
            cout << i << " ";
            i = i * 2;
        }

        else {
            cout << i << " ";
            i = i + 3;
        }
    }

    return 0;

}
