/*
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Chebyshev Distance calculation procedure.
*/
#include "iostream"
#include "cmath"
#include "Utils.cpp"

using namespace std;

void Chebyshev(int *v1, int *v2, int size) {
    int max = 0;
    int tempSum;
    for (int i = 0; i < size; i++) {
        tempSum=fabs(v1[i] - v2[i]);
        if(tempSum>max){
            max=tempSum;
        }
    }
    cout << max << endl;

}