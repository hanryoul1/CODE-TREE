#include <iostream>
using namespace std;

int main() {
    
    int cnt = 0;
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i%2==0||i%3==0||i%5==0) {
            continue;
        }
        cnt++;
    }

    cout << cnt;
    return 0;
}
