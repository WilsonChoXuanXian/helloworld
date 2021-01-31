#include <iostream>
using namespace std;

int main()
{
    int x, n;
    int c, p;

    cout << "This program outputs the result of numbers you enter as X^n." << endl;
    cout << "X: ";
    cin >> x;

    cout << "n: ";
    cin >> n;

    c = 1;
    p = 1;

    do
    {
        p = p * x;
        c += 1;

    } while (c <= n);

    cout << x << "^" << n << " = " << p << endl;

return 0;
}