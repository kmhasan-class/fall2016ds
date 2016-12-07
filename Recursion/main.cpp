#include <iostream>
using namespace std;

// FIX the following function so that it works for
// x = 0
int countDigits(int x) {
    if (x == 0)
        return 0;
    int digits = 1 + countDigits(x / 10);
    return digits;
}

int main() {
    cout << countDigits(1276) << endl;
    cout << countDigits(155476) << endl;
    cout << countDigits(12726) << endl;
    cout << countDigits(16) << endl;
    cout << countDigits(1) << endl;
    cout << countDigits(-12) << endl;
    cout << countDigits(0) << endl;
    return 0;
}
