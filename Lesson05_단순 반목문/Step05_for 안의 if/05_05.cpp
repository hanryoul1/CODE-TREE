#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 0;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> num;

        if ((num % 2 != 0) && (num % 3 == 0)) {
            sum += num;
        }
    }
    cout << sum;
    return 0;
}
