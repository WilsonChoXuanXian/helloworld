#include <iostream>
using namespace std;
int main()
{
    int p = 5, q = 3;
    int *a, *b, *c;
    a = &q;
    c = &p;
    b = a;
    *a = *a + 3;
    a = c;
    c = b;
    cout << *a << " " << *b << " " << *c << endl;
    return 0;
}