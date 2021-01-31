#include <iostream>
using namespace std;

int main()
{
    long double x;
    long double c, s, f, sgn;
    cout << "This program calculates the value of 'ln(1 + x)' which x is the number you enter." << endl;
    cout << "x: ";
    cin >> x;

    s = 0.0l;
    c = 1.0l;
    f = x;
    sgn = 1.0l;
    do
    {
        s = s + sgn*(f/c);
        f = f * x;
        c += 1;
        sgn = sgn * -1;

    } while (c <= 6);
    
    cout << "ln(1 + " << x << ") = " << s << endl;

return 0;
}