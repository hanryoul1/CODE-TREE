// 삼항연산자를 이용한 코드
// a = 조건 ? v1 : v2;

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result = a > b ? a : b;
    cout << result;

    return 0;
    
}
