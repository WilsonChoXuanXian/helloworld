#include <iostream>
using namespace std;

int main() 
{
    int c, n;
    bool isPrime = true;

    cout << "This program check whether the number you entered is a prime number or not." << endl;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n == 0 || n == 1) isPrime = false;

    else 
    {
        c = 2;

        while (c <= n / 2)
        {
            if (n % c == 0) isPrime = false;

            c += 1;
        }
    }
    if (isPrime) cout << n << " is a prime number";

    else cout << n << " is not a prime number";

    return 0;
}