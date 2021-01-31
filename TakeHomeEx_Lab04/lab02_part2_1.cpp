#include <iostream>
using namespace std;

int main()
{
    int n, c;

    cout << "This program display all the odd numbers from 0 to the number you enter." << endl;
    cout << "Enter a number: ";
    cin >> n;

    c = 1;

    do
    {
        cout << c << " ";
        c += 2;
    } while (c <= n);
    
return 0;
}