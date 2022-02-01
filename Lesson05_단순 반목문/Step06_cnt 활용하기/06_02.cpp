#include <iostream>
using namespace std;

int main() {

    int num, a = 0, b = 0;

    for (int i = 1; i <= 10; i++) {
        cin >> num;

        if (num % 3 == 0)
            a++;
        
        if (num % 5 == 0)
            b++;
    }

    cout << a << " " << b;
    return 0;
    
}
