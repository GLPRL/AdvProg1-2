/*
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Euclidean Distance calculation procedure.
 */
#include "iostream"
#include "Utils.cpp"
#include <iomanip>
using namespace std;

void Euclidean(int* v1, int* v2, int dim) {

    int *dist = new int[dim];
    for (int i = 0; i < dim; i++)
        dist[i] = pow(v1[i] - v2[i], 2);

    float total = EuclideanDist(dist, dim);
    cout << setprecision(17) << total << endl;
}