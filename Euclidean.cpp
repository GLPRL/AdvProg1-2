/*
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Euclidean Distance calculation procedure.
 */
#include "iostream"
#include "cmath"
#include "Utils.cpp"
using namespace std;

void Euclidean() {
    int dim;
    cout << "Please select how many dimensions" << endl;
    cin >> dim;
    int *p = new int[dim];
    int *q = new int[dim];

    cout << "Enter first vector elements" << endl;          //Insertion of vectors.
    EnterElements(p, dim);
    cout << "Enter second vector elements" << endl;
    EnterElements(q, dim);

    int *dist = new int[dim];
    for (int i = 0; i < dim; i++)
        dist[i] = pow(p[i] - q[i], 2);

    float total = EuclideanDist(dist, dim);
    cout << "Euclidean Distance between the vectors is: " << total << endl;

}