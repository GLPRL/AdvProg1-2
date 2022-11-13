using namespace std;
/**
 * Minkowski can work in 3 different ways, according to P:
 * If P = 1 then run Manhattan.
 * If P = 2, then run Euclidean.
 * Otherwise, there will be a power of 1/P over all of the sum, and power of P
 * over the difference of pi and qi, represented here as v1 and v2.
 * @param v1 First vector.
 * @param v2 Second vector.
 */
void minkowski(vector<int> v1, vector<int> v2) {
    euclidean(v1, v2);
}