/**
 Receives two vectors from the user and calculates various types of distances between them.
*/
#include "Algorithms.h"
#include <iostream>

using namespace std;


/**
 Reads a vector from the user in accordance to the ex1 instructions.
 Prints an error if the input is not as expected.
*/
vector<double> readVector() {
    string lin;
    getline(cin, lin);
    lin = ' ' + lin + " ";
    //if there is more than 1 space in a row exits the program.
    if (lin.find("  ") != string::npos) {
        printf("Error: too many blankspaces ");
        exit(-3);
    }
    vector<double> v;
    int pos = 0;
    double x;
    char *e;
    // loop untill the end of the string each time seprating the spaces.
    while ((pos = lin.find(" ")) != string::npos) {
        string sub = lin.substr(0, pos);
        x = std::strtod(sub.c_str(), &e);
        if (*e != '\0')
        {
            printf("Error: %s is not a number\n", sub.c_str());
            exit(-1);
        }
        v.push_back(x);
        lin.erase(0, pos + 1);
    }
    return v;
}

int main() {
    vector<double> v1 = readVector();
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

}