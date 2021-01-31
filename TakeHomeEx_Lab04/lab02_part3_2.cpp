#include <iostream>
using namespace std;

int main()
{
    int a, b, c, min;

    cout << "This program accept 20 numbers and display the smallest number among them." << endl;
    cout << "Enter a number: ";
    cin >> a;

    min = a;
    c = 1;

    do
    {
        cout << "Enter a number: ";
        cin >> b;

        if (min > b) min = b;
        
        c += 1;

    } while (c < 20);
    
    cout << "The smallest number is " << min << endl;

return 0;
}