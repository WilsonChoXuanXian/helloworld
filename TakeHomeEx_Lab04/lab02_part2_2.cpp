#include <iostream>
using namespace std;

int main()
{
    int n, c, sum;

    cout << "This program sum up all the numbers from 0 to the number you enter." << endl;
    cout << "Enter a number: ";
    cin >> n;

    c = 1;
    sum = 0;

    do
    {
        sum = sum + c;
        c += 1;
    } while (c <= n);
    
    cout << "The total is: " << sum << endl;

return 0;
}