#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int x = 1234;
    double y = 3.1415;
    string name = "John Doe";
    cout << name << " " << x << " " << y << endl;

    // C way -- with stdio.h
    printf("Enter an integer\n");
    scanf("%d", &x);
    printf("The number entered: %d\n", x);

    // C++ way -- with iostream
    cout << "Enter a floating point number" << endl;
    cin >> y;
    cout << "The number entered: " << y << endl;

    return 0;
}
