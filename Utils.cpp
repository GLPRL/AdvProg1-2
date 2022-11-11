/*
 * Created by Gal Pearl on 11/11/2022.
 * Cpp file for utility functions.
 */
#include "iostream"
#include "cmath"
using namespace std;

    void EnterElements(int *arr, int dim) {
        for (int i = 0; i < dim; i++) {
            cout << i << "element; out of: " << dim << endl;
            cin >> arr[i];
        }
    }
    float EuclideanDist (int* arr, int dim) {
        float total = 0;
        for (int i = 0; i < dim; i++)
            total += arr[i];
        return sqrt(total);
}