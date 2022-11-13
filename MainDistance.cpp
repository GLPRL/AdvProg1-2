/**
 Receives two vectors from the user and calculates various types of distances between them.
*/
using namespace std;
#include "Canberra.cpp"
#include "Chebyshev.cpp"
#include "Euclidean.cpp"
#include "Manhattan.cpp"
#include "Minkowski.cpp"
#include <vector>
/**
 Reads a vector from the user.
*/
vector <int> readVector(){
    cin >> x;
    vector<int> v;
    while(cin.peek()!='\n'){
        v.push_back(x);
        cin >> x;
    }
  return v;
}
/*
 * Main function. Handles the vector creation and distance algorithm function calls.
 */
int main() {
    vector<int> v1=readVector();
    vector<int> v2=readVector();
    // Makes sure that both vectors are the same size.
    if(v1.size()!=v2.size()){
      cout<<"Error: vectors are not the same size"<<endl;
      return 1;
    }
    euclidean(v1, v2);
    manhattan(v1, v2);
    chebyshev(v1, v2);
    canberra(v1, v2);
    minkowski(v1, v2);
    return 0;
}