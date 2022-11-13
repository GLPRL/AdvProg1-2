/**
 Receives two vectors from the user and calculates various types of distances between them.
*/
#include "Algorithms.h"
#include "Algorithms.cpp"
using namespace std;
/**
 Reads a vector from the user.
*/
vector <int> readVector(){
    int x;
    cin >> x;
    vector<int> v;
    v.push_back(x);
    while(cin.peek()!='\n'){
        cin >> x;
        v.push_back(x);
    }
    return v;
}
int main() {
    vector<int> v1=readVector();
    vector<int> v2=readVector();
    if(v1.size()!=v2.size()){
        cout<<"Error: vectors are not the same size"<<endl;
       return 0;
    }
    euclidean(v1, v2);
    manhattan(v1, v2);
    chebyshev(v1, v2);
    canberra(v1, v2);
    minkowski(v1, v2);


}