/*
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Canberra Distance calculation procedure.
*/
#include "iostream"
#include "cmath"
#include "Utils.cpp"
using namespace std;

void Canberra() {
    int dim;
    cout << "Please select how many dimensions" << endl;
    cin >> dim;
    int *p = new int[dim];
    int *q = new int[dim];
    cout << "Enter first vector elements" << endl;              //Insertion of vectors.
    EnterElements(p, dim);
    cout << "Enter second vector elements" << endl;
    EnterElements(q, dim);

    float *dist = new float[dim];
    for (int i = 0; i < dim; i++) {                             //Inner calculations
        dist[i] = abs(p[i] - q[i]) / (abs(p[i]) + abs(q[i]));
    }
    float sum = 0;
    for (int i = 0; i < dim; i++) {                             //Summary of elements according to the formula,
        sum += dist[i];                                         //Repr. the Sigma
    }
    cout << "Canberra Distance between the vectors is: " << sum << endl;
}