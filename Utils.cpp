/*
 * Created by Gal Pearl on 11/11/2022.
 * Cpp file for utility functions.
 */
#include "iostream"
#include "cmath"
using namespace std;

    float EuclideanDist (int* v, int dim) {
        float total = 0;
        for (int i = 0; i < dim; i++) {
        total += v[i];
        }
        return sqrtf(total);
}