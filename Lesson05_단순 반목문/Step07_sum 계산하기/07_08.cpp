#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int num;
    int sum = 0;
    double avg;

    for (int i = 1; i <= n; i++) {
        cin >> num;
        sum += num;
    }

    avg = double(sum) / n;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;

}
