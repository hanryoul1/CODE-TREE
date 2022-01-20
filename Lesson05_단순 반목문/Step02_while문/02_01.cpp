// while (조건) {

// do {
//    여기에 조건을 만족할 때만 수행되었으면 
//    하는 코드를 작성, 무조건 한번은 실행됨
// } while (조건);

// do-while loop : while loop와 크게 차이가 없으나, 해당하는 반복문을 조건과 상관 없이 무조건 한번 실행한다는 차이점

#include <iostream>
using namespace std;

int main() {

    int n = 10;
    while (n <= 26) {
        cout << n << " ";
        n++;
    }

    return 0;

}
