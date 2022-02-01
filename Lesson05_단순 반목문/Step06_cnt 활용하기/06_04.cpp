#include <iostream>
using namespace std;

int main() {

    int n, a = 0, b = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        if ((i % 4 == 0) and (i % 100 == 0) and (i % 400 == 0))
            a++;

        else if ((i % 4 == 0) and (i % 100 == 0))
            b++;
    
        else if (i % 4 == 0)
            a++;
    
        else
            b++;
    }

    cout << a;
    return 0;
}
