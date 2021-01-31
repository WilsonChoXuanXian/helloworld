#include <iostream>
using namespace std;

int main()
{
    int n, c, f;
    cout << "This program will print the factorial of the number you enter." << endl;;
    cout << "Please enter a number: ";
    cin >> n;

    c = 1;
    f = 1;

    do
    {
        cout << c;
        f = f * c;
        if (c < n) cout << " * ";
        c += 1;

    } while (c <= n);
    
    cout << " = " << f << endl;

return 0;
}