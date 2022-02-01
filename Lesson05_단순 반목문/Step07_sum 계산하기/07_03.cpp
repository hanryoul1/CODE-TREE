#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int cnt = 0, sum_val = 0;
    double mid;

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            cnt++;
            sum_val += i;
        }

        else if (i % 7 == 0) {
            cnt++;
            sum_val += i;
        }
    }

    mid = (double)sum_val/cnt;
    
    cout << fixed;
    cout.precision(1);
    cout << sum_val << " " << mid;

    return 0;

}
