/*
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Canberra Distance calculation procedure.
*/
#include "iostream"
#include "cmath"
#include <iomanip>
using namespace std;

void Canberra(int* v1, int* v2, int dim) {

    double *dist = new double[dim];
    for (int i = 0; i < dim; i++) {                             //Inner calculations
        dist[i] = fabs(v1[i] - v2[i]) / (abs(v1[i]) + abs(v2[i]));
    }
    double sum = 0;
    for (int i = 0; i < dim; i++) {                             //Summary of elements according to the formula,
        sum += dist[i];                                         //Repr. the Sigma
    }
    cout << fixed << setprecision(1) << sum << endl;
}