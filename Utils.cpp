/*
 * Created by Gal Pearl on 11/11/2022.
 * Cpp file for utility functions.
 */
#include "iostream"
#include "cmath"
using namespace std;

    float EuclideanDist (int* arr, int dim) {
        float total = 0;
        for (int i = 0; i < dim; i++) {
        total += arr[i];
        }
        return sqrtf(total);
}