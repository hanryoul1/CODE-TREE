// 소괄호를 사용하지 않으면? and -> or

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    if ((n % 2 != 0 && n % 3 == 0) || (n % 2 == 0 && n % 5 ==0))
        cout << "true";

    else
        cout << "false";
    
    return 0;

}
