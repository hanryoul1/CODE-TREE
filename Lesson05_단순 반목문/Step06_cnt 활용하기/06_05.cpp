#include <iostream>
using namespace std;

int main() {
    int num;
    int result = 0;

    for (int i = 1; i <= 5; i++) {
        cin >> num;
        
        if (num % 2 == 0) {
            result++;
        }
    }
    cout << result;
    return 0;
}
