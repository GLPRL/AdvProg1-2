
#include "iostream"
#include "cmath"
#include <iomanip>
#include <vector>
using namespace std;

/**
 receives 2 vectors.
 calculates their Chebyshev distance, and prints it.
 */
void chebyshev(vector<int> v1, vector<int> v2) {
    double max = 0;
    int size=v1.size();
    int tempSum;
    for (int i = 0; i < size; i++) {
        tempSum = fabs(v1[i] - v2[i]);
        if (tempSum > max){
            max = tempSum;
        }
    }
    cout << fixed << setprecision(1) << max << endl;
}