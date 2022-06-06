#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    float num1 = a + b;
    float num2 = a - b;
    float result = num1 / num2;
    cout << fixed;
    cout.precision(2);
    cout << result;

    return 0;
}
