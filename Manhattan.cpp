#include "iostream"
#include "cmath"
#include <iomanip>
/**
 receives 2 vectors represented by arrays and their size.
 calculates their Manhattan distance and prints it.
 */
using namespace std;

void manhattan(int *v1, int *v2, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += fabs(v1[i] - v2[i]);
    }
    cout << fixed << setprecision(1) << sum << endl;
}