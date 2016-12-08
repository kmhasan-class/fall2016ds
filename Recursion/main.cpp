#include <iostream>
using namespace std;

// FIX the following function so that it works for
// x = 0
int countDigits(int x) {
    if (x > -10 && x < 10)
        return 1;
    int digits = 1 + countDigits(x / 10);
    return digits;
}

int power(int x, int y) {
    int result = 1;
    for (int i = 1; i <= y; i++)
        result = result * x;
    return result;
}

int recursivePower(int x, int y) {
    if (y == 0)
        return 1;
    int result = recursivePower(x, y / 2);
    result = result * result;
    if (y % 2 == 1)
        result = result * x;
    return result;
}

bool isPalindrome(string str) {
    int i, j;
    for (i = 0, j = str.length() - 1; i < j; i++, j--)
        if (str[i] != str[j])
            return false;
    return true;
}

bool isRecursivePalindrome(string str, int i, int j) {
    if (i >= j)
        return true;
    if (str[i] == str[j] &&
        isRecursivePalindrome(str, i  + 1, j - 1))
        return true;
}

int nchooser(int n, int r) {
// try to find similar functions for nPr

// try to find out the relation of this recursive
// function with PASCAL's TRIANGLE
    if (r == 0)
        return 1;
    if (n == r)
        return 1;
    int result = nchooser(n - 1, r - 1) + nchooser(n - 1, r);
    return result;
}

int main() {
    cout << power(2, 20) << endl;
    cout << power(2, 10) << endl;
    cout << recursivePower(2, 20) << endl;
    cout << recursivePower(2, 10) << endl;

    cout << isPalindrome("abba") << endl;
    cout << isPalindrome("madam") << endl;
    cout << isPalindrome("sir") << endl;

    cout << isRecursivePalindrome("abba", 0, 3) << endl;
    cout << isRecursivePalindrome("madam", 0, 4) << endl;
    cout << isRecursivePalindrome("sir", 0, 2) << endl;

    cout << nchooser(4, 2) << endl;
    cout << nchooser(20, 2) << endl;
/*
    cout << countDigits(1276) << endl;
    cout << countDigits(155476) << endl;
    cout << countDigits(12726) << endl;
    cout << countDigits(16) << endl;
    cout << countDigits(1) << endl;
    cout << countDigits(-12) << endl;
    cout << countDigits(0) << endl;
    */
    return 0;
}
