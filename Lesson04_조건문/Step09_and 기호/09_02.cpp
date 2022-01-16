// C++에서는 조건 2개를 && , || 등을 사용하지 않고 동시에 표현할 수 없음에 주의

#include <iostream>
using namespace std;

int main() {

    int a;
    cin >> a;

    if (10 <= a && a <= 20)
        cout << "yes";
    
    else
        cout << "no";
    
    return 0;
    
}
