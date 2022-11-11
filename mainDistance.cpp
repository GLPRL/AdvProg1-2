/*
 * Created by Gal Pearl on 11/11/2022.
 * This class will be running the operations, calling a formula to calculate according to user's choice.
*/
#include "Euclidean.cpp"
#include "Canberra.cpp"
#include "Chebyshev.cpp"
#include "Manhattan.cpp"
#include "Minkowski.cpp"

using namespace std;
// Utility function to print options for user to select.
int* ExtendArray(int *oldArray, int size) {
    int newSize = size + 1;
    int *newArray = new int[newSize];
    for (int i = 0; i < size; i++) {
        newArray[i] = oldArray[i];
    }
    delete[] oldArray;
    return newArray;

}
int* BuildArray(int *p, int& size) {
    int x;
    cin >> x;
    int current = 0;

    while (true) {
        if (current != size) {
            p[current] = x;
            current++;
        } else if (current == size) {
            p = ExtendArray(p,size);
            p [current] = x;
            current++;
            size++;
        }
        if (cin.peek() == '\n') {
            break;
        }
        cin >> x;
    }
    return p;
}
int main() {
    int *p = new int[1];
    int size = 1;
    p = BuildArray(p, size);                //Building first vector
    for (int i = 0; i < size; i++) {
        cout << p[i] << endl;
    }
    int* q = new int[size];
    int x;
    for (int i = 0; i < size; i++) {            //Building second vector.
        cin >> x;
        q[i] = x;
    }
    for (int i = 0; i < size; i++) {
        cout << q[i] << endl;
    }
    Euclidean(p, q, size);
    Manhattan(p, q, size);
    Chebyshev(p, q, size);
    Canberra(p, q, size);
    //Minkowski(p, q, size);
}