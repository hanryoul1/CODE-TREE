// 추의 무게 = 13, 달에서 중력의 비율 = 0.165

#include <iostream>
using namespace std;

int main() {
    // 변수 선언
    int a = 13;
    double b = 0.165;
	
	cout << fixed;  // 소수점 자리 표현을 고정하겠다는 뜻
	cout.precision(6);  // 소수점 n째자리까지 표현하겠다는 뜻
    
    // 출력
    cout << a << " * " << b << " = " << a * b;
    return 0;
}
