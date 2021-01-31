#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "This program compute the sum of all the numbers below the number you enter and above 0." << endl;
    cout << "Please enter a number: ";
    cin >> n;

   
    sum = 0;
    do
    {
        n -= 1;
        sum = sum + n;

        cout << n;

            if (n > 1) cout << " + ";

    } while (n > 1);

    cout << " = " << sum << endl;
    
return 0;
}