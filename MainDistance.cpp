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
int *extendArray(int *oldV, int size) {
    int newSize = size + 1;
    int *newV = new int[newSize];
    for (int i = 0; i < size; i++) {
        newV[i] = oldV[i];
    }
    delete[] oldV;
    return newV;

}
/**
 Builds vector array of unknown size according to user input.
 */
int *buildArray(int *v, int &size) {
    int x;
    cin >> x;
    int current = 0;

    while (true) {
        if (current != size) {
            v[current] = x;
            current++;
        } else if (current == size) {
            v = extendArray(v, size);
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
    v1 = buildArray(v1, size);                //Building first vector

    int *v2 = new int[size];
    int x;
    for (int i = 0; i < size; i++) {                //Building second vector.
        cin >> x;
        v2[i] = x;
    }

    euclidean(v1, v2, size);
    manhattan(v1, v2, size);
    chebyshev(v1, v2, size);
    canberra(v1, v2, size);
    minkowski(v1, v2, size);
}