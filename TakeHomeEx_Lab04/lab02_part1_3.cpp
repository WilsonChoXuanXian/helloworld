#include <iostream>
using namespace std;

int main()
{
    int a, c, max;
    c = 1;

    cout << "This program compares ten numbers from your input and display the largest one." << endl;
    cout << "Please enter the number you want to compare: " << endl;
    cin >> a;

    max = a;

    do
    {
        cout << "Please enter another number that you want to compare: " << endl;
        cin >> a;

        if (max < a) max = a;
        
        c = c + 1;

    } while (c < 10);

    cout << max << " is the largest number." << endl;
    
return 0;
}