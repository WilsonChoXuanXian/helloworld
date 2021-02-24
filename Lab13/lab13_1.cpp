#include <iostream>
#include <cmath>
using namespace std;

void bothways(int n, int *square, double *sq_root)
{
    *square = n * n;
    *sq_root = sqrt(n);
}

int main()
{
    int n = 100;
    // MODIFY these two variables such that they arecreated dynamically by
    // pointer variables.

    int *sq;
    double *sq_root;

    sq = new int;
    sq_root = new double;

    // The subsequent lines should be MODIFIED accordingly so that
    // the program works correctly.

    bothways(n, sq, sq_root);

    cout << n << " " << *sq << " " << *sq_root;

    delete sq;
    delete sq_root;

    return 0;
}