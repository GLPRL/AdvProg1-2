/*
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Euclidean Distance calculation procedure.
 */
#include "iostream"
#include "Utils.cpp"
using namespace std;

void Euclidean(int* p, int* q, int dim) {

    int *dist = new int[dim];
    for (int i = 0; i < dim; i++)
        dist[i] = pow(p[i] - q[i], 2);

    float total = EuclideanDist(dist, dim);
    cout << total << endl;
}