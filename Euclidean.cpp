/**
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Euclidean Distance calculation procedure.
 */
#include "iostream"
#include "cmath"
#include <iomanip>
using namespace std;
/**
 * Euclidean Distance algorithm. Prints the distance between two vectors,
 * With precision of 17 digits to the right of the decimal point.
 * @param v1 First vector.
 * @param v2 Second vector.
 * @param dim Our current dimension.
 */
void euclidean(int* v1, int* v2, int dim) {
    int *dist = new int[dim];
    for (int i = 0; i < dim; i++)                           //Inner summary and raising by power of 2.
        dist[i] = pow(v1[i] - v2[i], 2);
    double total = 0;
    for (int i = 0; i < dim; i++) {
        total += dist[i];
    }
    total = sqrt(total);                                    //Square-root on the total of the summary.
    cout <<  setprecision(17) << total << endl;
}