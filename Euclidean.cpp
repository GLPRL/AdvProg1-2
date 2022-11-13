
#include "iostream"
#include "cmath"
#include <iomanip>
#include <vector>
using namespace std;

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