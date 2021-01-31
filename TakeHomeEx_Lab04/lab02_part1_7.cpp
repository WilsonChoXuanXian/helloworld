#include <iostream>
using namespace std;

int main()
{
    int n, c, sum, average;
    c = 1;
    sum = 0;

    cout << "This program accept ten numbers from your input and display their average" << endl;

    do
    {
        cout << "Enter a number: ";
        cin >> n;
        sum = sum + n;
        c = c + 1;
    } while (c <= 10);
    
    average = sum / 10;

    cout << "The average is " << average << endl;

return 0;
}