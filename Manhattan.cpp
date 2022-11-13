
#include "iostream"
#include "cmath"
#include <iomanip>
#include <vector>
using namespace std;

/**
 * receives 2 vectors.
 * calculates their Manhattan distance and prints it.
 */
void manhattan(vector<int> v1, vector<int> v2) {
    double sum = 0;
    int size = v1.size();
    for (int i = 0; i < size; i++) {
        sum += fabs(v1[i] - v2[i]);
    }
    cout << fixed << setprecision(1) << sum << endl;
}