
#include "Algorithms.h"
/**
 * Euclidean Distance algorithm. Prints the distance between two vectors,
 * With precision of 17 digits to the right of the decimal point.
 * @param v1 First vector.
 * @param v2 Second vector.
 */
void euclidean(vector<int> v1, vector<int> v2) {
    vector<int> dist;
    for (int i = 0; i < v1.size(); i++) {                               //Inner summary and raising by power of 2.
        dist.push_back(pow(v1[i] - v2[i], 2));
    }
    double total = 0;
    for (int i = 0; i < v1.size(); i++) {
        total += dist[i];
    }
    total = sqrt(total);                                                //Square-root on the total of the summary.
    cout <<  setprecision(17) << total << endl;
}
/**
 * Minkowski can work in 3 different ways, according to P:
 * If P = 1 then run Manhattan.
 * If P = 2, then run Euclidean.
 * Otherwise, there will be a power of 1/P over all of the sum, and power of P
 * over the difference of pi and qi, represented here as v1 and v2.
 * @param v1 First vector.
 * @param v2 Second vector.
 */
void minkowski(vector<int> v1, vector<int> v2) {
    euclidean(v1, v2);
}
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
