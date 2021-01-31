#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "This program display the remainder when the first number is divided by the second number" << endl;
    cout << "First number: ";
    cin >> a;

    cout << "Second number: ";
    cin >> b;

    do
    {
        a = a - b;
    } while (a > b);

    cout << "The remainder = " << a;
    
return 0;
}