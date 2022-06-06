#include<iostream>
using namespace std;

int main() {
    float a = 5.26;
    float b = 8.27;
    
    float c = a*b;

    cout << fixed;
	cout.precision(3);

    cout << c;
    return 0;
}
