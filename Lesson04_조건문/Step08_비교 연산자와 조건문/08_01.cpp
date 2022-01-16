#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << (a >= b) << endl;
    cout << (a > b) << endl;
    cout << (b >= a) << endl;
    cout << (b > a) << endl;
    cout << (a == b) << endl;
    cout << (a != b);

    return 0;
        
}

// 1(참 - true) 혹은 0(거짓 - false) 값을 반환
// 0이 아닌 값은 true이고, 0은 false로 정의
