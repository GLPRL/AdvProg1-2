/**
 Receives two vectors from the user and calculates various types of distances between them.
*/
#include "Algorithms.h"
#include "string"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


/**
 Reads a vector from the user in accordance to the ex1 instructions.
 Prints an error if the input is not as expected.
*/
vector<double> readVector2() {
    string lin;
    getline( cin, lin );
    lin = ' '+lin+" ";
    //if there is more than 1 space in a row exits the program.
    if (lin.find("  ") != string::npos) {
        printf("Error: too many blankspaces ");
        exit(-3);
    }
    lin = regex_replace(lin, regex(" +"), " ");
    printf("%s\n",lin.c_str());

    vector<double> v;
    int size_t = 0;
    int pos = 0;

    double x;
    char * e;
    int err = 0;

    while ((pos = lin.find(" ")) != string::npos) {
        string ddd = lin.substr(0,pos);
        x = std::strtod(ddd.c_str(), &e);
        if (*e != '\0' || err != 0 )
        {
            printf("Error: %s is not a number\n",ddd.c_str());
            exit(-1);
        }
        v.push_back(x);
        lin.erase(0, pos + 1);
    }
    return v;
}

int main() {
    vector<double> v1 = readVector2();
    printf("---------\n");
    vector<double> v2 = readVector2();
    printf("---------\n");

    for (int i=0; i<v1.size(); i++) {
        printf("%f ", v1[i]);
    }
    printf("\n");

    for (int i=0; i<v2.size(); i++) {
        printf("%f ", v2[i]);
    }
    printf("\n");
    printf("---------\n");

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

/*
    vector<double> v1 = readVector();
    vector<double> v2 = readVector();
    if (v1.size() != v2.size()) {
        cout << "Error: Vectors are not the same size" << endl;
        return 0;
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
*/
}