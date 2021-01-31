#include <iostream>
using namespace std;

int main()
{
    int n, c, sum;
    c = 1;
    sum = 0;

    cout << "This program accept ten numbers from your input and display their sum" << endl;

    do
    {
        cout << "Enter a number: ";
        cin >> n;
        sum = sum + n;
        c = c + 1;
    } while (c <= 10);
    
    cout << "The total is " << sum << endl;

return 0;
}