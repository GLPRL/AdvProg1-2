/**
 Receives two vectors from the user and calculates various types of distances between them.
*/
#include "Euclidean.cpp"
#include "Canberra.cpp"
#include "Chebyshev.cpp"
#include "Manhattan.cpp"
#include "Minkowski.cpp"

using namespace std;

/**
 A function that extends an array size by 1.
 */
int *ExtendArray(int *OldV, int size) {
    int newSize = size + 1;
    int *NewV = new int[newSize];
    for (int i = 0; i < size; i++) {
        NewV[i] = OldV[i];
    }
    delete[] OldV;
    return NewV;

}
/**
 Builds vector array of unknown size according to user input.
 */
int *BuildArray(int *v, int &size) {
    int x;
    cin >> x;
    int current = 0;

    while (true) {
        if (current != size) {
            v[current] = x;
            current++;
        } else if (current == size) {
            v = ExtendArray(v, size);
            v[current] = x;
            current++;
            size++;
        }
        if (cin.peek() == '\n') {
            break;
        }
        cin >> x;
    }
    return v;
}

int main() {
    int *v1 = new int[1];
    int size = 1;
    v1 = BuildArray(v1, size);                //Building first vector

    int *v2 = new int[size];
    int x;
    for (int i = 0; i < size; i++) {            //Building second vector.
        cin >> x;
        v2[i] = x;
    }

    Euclidean(v1, v2, size);
    Manhattan(v1, v2, size);
    Chebyshev(v1, v2, size);
    Canberra(v1, v2, size);
    //Minkowski(v1, v2, size);
}