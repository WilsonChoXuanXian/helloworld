#include <iostream>
using namespace std;

int main()
{
    int a, b, c, sum;

    cout << "Enter 3 numbers that you want to sum them up." << endl;
    cout << "first number: ";
    cin >> a;

    cout << "second sumber: ";
    cin >> b;

    cout << "third sumber: ";
    cin >> c;

    sum = a + b + c;

    cout << a << " + " << b << " + " << c << " = " << sum << endl;

return 0;
}