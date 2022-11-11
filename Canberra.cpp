/*
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Canberra Distance calculation procedure.
*/
#include "iostream"
#include "cmath"
using namespace std;

void Canberra(int* p, int*q, int dim) {

    double *dist = new double[dim];
    for (int i = 0; i < dim; i++) {                             //Inner calculations
        dist[i] = fabs(p[i] - q[i]) / (abs(p[i]) + abs(q[i]));
    }
    double sum = 0;
    for (int i = 0; i < dim; i++) {                             //Summary of elements according to the formula,
        sum += dist[i];                                         //Repr. the Sigma
    }
    cout << sum << endl;
}