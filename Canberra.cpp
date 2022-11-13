
#include "iostream"
#include "cmath"
#include <iomanip>
#include <vector>
using namespace std;

/**
 * Canberra Distance algorithm. Prints the distance between two vectors,
 * With precision of 1 digit to the right of the decimal point.
 * @param v1 First vector.
 * @param v2 Second vector.
 */
void canberra(vector<int> v1, vector<int> v2) {
    vector<double> dist;
    for (int i = 0; i < v1.size(); i++) {                               //Inner calculations for division.
        dist.push_back(fabs(v1[i] - v2[i]) / (abs(v1[i]) + abs(v2[i])));
    }
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {                               //Summary of elements according to the formula,
        sum += dist[i];                                                 //Repr. the sum of divisions.
    }
    cout << fixed << setprecision(1) << sum << endl;
}