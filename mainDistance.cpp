/*
 Created by Gal Pearl on 11/11/2022.
 This class will be running the operations, calling a formula to calculate according to user's choice.
*/

#include "Euclidean.cpp"
#include "Chebyshev.cpp"
#include "Canberra.cpp"
#include "Minkowski.cpp"
#include "Manhattan.cpp"
#include "iostream"

using namespace std;
// Utility function to print options for user to select.
void printSelections() {
    cout << "Please select your method to calculate:" << endl << "\t 1. Euclidean Distance" << endl
         << "\t 2. Manhattan Geometry" << endl << "\t 3. Chebyshev Distance" <<
         endl << "\t 4. Canberra Distance" << endl << "\t 5. Minkowski Distance" << endl;
}

int main() {
    cout << "Please select your method to calculate:" << endl;
    printSelections();
    int x;
    cin >> x;
    while (x > 5 || x < 1) {
        cout << "Wrong selection!" << endl;
        printSelections();
        cin >> x;
    }
    if (x == 1)
        Euclidean();
    if (x == 2)
        Manhattan();
    if (x == 3)
        Chebyshev();
    if (x == 4)
        Canberra();
    if (x == 5)
        Minkowski();
}
