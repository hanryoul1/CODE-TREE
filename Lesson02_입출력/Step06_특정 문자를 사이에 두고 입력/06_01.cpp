#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a;
    cin.get();  // 새로운 변수를 선언하지 않고, 중간 문자를 무시
    cin >> b;
    cout << a << endl << b;  // 50:60 -> 50 (endl) 60

    return 0;

}
