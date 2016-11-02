#include <iostream>
using namespace std;

int getMaxDifference(int array[], int numberOfElements) {
    int min = array[0];
    int max = array[0];

    for (int i = 1; i < numberOfElements; i++) {
        if (array[i] < min)
            min = array[i];
        if (array[i] > max)
            max = array[i];
    }
    return max - min;
}

int main () {
    int x[] = {4, 5, -20, 1, 50, 3, 7};
    int n = 7;
    int maxDifference = getMaxDifference(x, n);
    cout << maxDifference << endl;
    return 0 ;
}
