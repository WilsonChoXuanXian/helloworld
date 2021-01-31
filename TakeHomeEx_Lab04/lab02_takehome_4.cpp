#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    int x1, x2;

    cout << "This program will calculate the real roots of a quadratic equation." << endl;;
    cout << "Quadratic equation : ax^2 + bx + c" << endl;
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    x1 = (-b + sqrt(b*b - 4*a*c)) / 2*a;
    x2 = (-b - sqrt(b*b - 4*a*c)) / 2*a;

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

return 0;
}