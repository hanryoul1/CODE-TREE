// for( 초기화식 ; 조건식 ; 증감식 ) 
// 초기화식에서는 for loop의 초기조건을 정해줌
// 조건식에 해당하는 경우에만 for llop를 진행
// for loop 의 반복코드를 한번 진행한 경우 증감식에 의해 반복코드를 진행한 횟수가 세어짐

#include <iostream>
using namespace std;

int main() {

	for (int i = 5; i <= 17; i++)
		cout << i << " ";

    // 전위 연산자(++i) : 증가 -> 코드 실행 
    // 후위 연산자((i++) : 코드 실행 -> 증가

	return 0;

}
