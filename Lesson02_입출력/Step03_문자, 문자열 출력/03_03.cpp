#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    char c;
    double a, b;
    
    // 입력
    cin >> c >> a >> b;
    cout << fixed;
    cout.precision(2);

    // 출력
    cout << c << endl;
    cout << a << endl << b;
    
    return 0;

}
