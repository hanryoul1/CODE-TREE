#include <iostream>
using namespace std;

int main() {

    int num;
    int cnt = 0, sum = 0;
    double avg;

    for (int i = 1; i <= 10; i++) {
        cin >> num;

        if (num >= 0 && num <= 200) {
            sum += num;
            cnt++;
        }
    }

    avg = double(sum) / cnt;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;

    return 0;

}
