/**
 Receives two vectors from the user and calculates various types of distances between them.
*/
#include "Algorithms.h"
using namespace std;

/**
 Reads a vector from the user.
*/
vector<double> readVector() {
    double x;
    cin >> x;
    vector<double> v;
    v.push_back(x);
    while (cin.peek() != '\n') {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Error: Invalid input. Exiting program." << endl;
            exit(1);
        }
        cin >> x;
        v.push_back(x);
    }
    return v;
}

int main() {
    vector<double> v1 = readVector();
    vector<double> v2 = readVector();
    if (v1.size() != v2.size()) {
        cout << "Error: Vectors are not the same size" << endl;
        return 0;
    }
    cout << setprecision(17) << euclidean(v1, v2) << endl;
    cout << fixed << setprecision(1) << manhattan(v1, v2) << endl;
    cout << fixed << setprecision(1) << chebyshev(v1, v2) << endl;
    cout << fixed << setprecision(1) << canberra(v1, v2) << endl;
    cout.unsetf(std::ios_base::floatfield);
    cout << setprecision(17) << minkowski(v1, v2) << endl;


}