#include <iostream>
using namespace std;
int main()
{
    float m = 0.5, n = 1.5;
    float* r = &n;
    float* s = &m;
    while (m < *r*4) {
    cout << *s << " ";
    m = m + *s;
    }

return 0;
}