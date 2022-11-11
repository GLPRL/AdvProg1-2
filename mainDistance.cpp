/*
 Created by galpearl on 11/11/2022.
 This class will be running the operations, calling a formula to calculate according to user's choice.
 */
#include "iostream"
using namespace std;
int main() {
    cout << "Please select your method to calculate:" << endl;
    cout << "\t 1. Euclidean Distance" << endl << "\t 2. Manhattan Geometry" << endl << "\t 3. Chebyshev Distance" <<
            endl << "\t 4. Canberra Distance" << endl << "\t 5. Minkowski Distance" << endl;
    int x;
    cin >> x;
    while (x > 5 || x < 1) {
        cout << "Wrong selection!" << endl << "Please select your method to calculate:" << endl <<
             "\t 1. Euclidean Distance" << endl << "\t 2. Manhattan Geometry" << endl << "\t 3. Chebyshev Distance" <<
             endl << "\t 4. Canberra Distance" << endl << "\t 5. Minkowski Distance" << endl;
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
