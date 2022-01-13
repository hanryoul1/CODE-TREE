// 1피트(ft)는 30.48cm이고 1마일(mi)은 160934cm
// 9.2피트와 1.3마일을 각각 cm로 변환하여 다음 형식에 맞추어 소수 첫째자리까지 반올림하여 출력하는 프로그램

#include <iostream>
using namespace std;

int main() {

    double a = 9.2;
    double b = 1.3;

    cout << fixed;  
	cout.precision(1); 

    cout << a << "ft = " << a * 30.48 <<"cm" << endl;
    cout << b << "mi = " << b * 160934 << "cm";
    return 0;
}
