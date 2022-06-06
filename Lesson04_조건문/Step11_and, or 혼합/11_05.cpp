#include <iostream>
using namespace std;

int main() {
    int hum1, hum2;
    char hum1s, hum2s;

    cin >> hum1 >> hum1s >> hum2 >> hum2s;

    if ((hum1 >= 19 && hum1s == 'M') || (hum2 >= 19 && hum2s == 'M'))
        cout << 1;
    
    else
        cout << 0;
}
