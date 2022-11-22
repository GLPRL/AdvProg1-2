/**
 Receives two vectors from the user and calculates various types of distances between them.
*/
#include "Algorithms.h"

using namespace std;

/**
 Reads a vector from the user in accordance to the ex1 instructions.
 Prints an error if the input is not as expected.
*/
vector<double> readVector() {
    string lin;
    getline(cin, lin);
    lin = ' ' + lin + " ";
    // If there is more than one space in a row, then exit the program.
    if (lin.find("  ") != string::npos) {
        cout << "Error: too many white spaces" << endl;
        exit(-3);
    }
    vector<double> v;
    int pos = 0;
    double x;
    char *e;
    // Loop until the end of the string each time separating the spaces.
    while ((pos = lin.find(" ")) != string::npos) {
        string sub = lin.substr(0, pos);
        x = std::strtod(sub.c_str(), &e);
        if (*e != '\0')
        {
            cout << "Error:" << sub.c_str() << " is not a number" << endl; ;
            exit(-1);
        }
        v.push_back(x);
        lin.erase(0, pos + 1);
    }
    return v;
}
/**
 * Main function. Summons the vector builders, checks if they are valid, and distance algorithms.
 * @return code 0 if works as expected.
 */
int main() {
    cout << "Please enter first vector" << endl;
    vector<double> v1 = readVector();
    cout << "Please enter second vector" << endl;
    vector<double> v2 = readVector();
    if (v1.size() != v2.size()) {
        cout << "Error: Vectors are not the same size" << endl;
        exit(-2);
    }
    cout.precision(5);
    cout << euclidean(v1, v2) << endl;
    cout.precision(1);
    cout << fixed << manhattan(v1, v2) << endl;
    cout << fixed << chebyshev(v1, v2) << endl;
    cout << fixed << canberra(v1, v2) << endl;
    cout.precision(5);
    cout.unsetf(std::ios_base::floatfield);
    cout << minkowski(v1, v2) << endl;
    return 0;
}