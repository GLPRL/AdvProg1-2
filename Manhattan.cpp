/*
 * Created by Gal Pearl on 11/11/2022.
 * The file will run a Manhattan Distance calculation procedure.
*/
#include "iostream"
#include "cmath"
#include "Utils.cpp"

using namespace std;

void Manhattan(int *v1, int *v2, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += fabs(v1[i] - v2[i]);
    }
    cout << sum << endl;
}