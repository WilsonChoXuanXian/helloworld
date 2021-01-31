#include <iostream>
using namespace std;

int main()
{
     int A, B, C, max;

    cout << "Input 3 numbers that you want to compare." << endl;
    cout << "A: ";
    cin >> A;

    cout << "B: ";
    cin >> B;

    cout << "C: ";
    cin >> C;

    max = A;

    if (max < B) max = B;

    if (max < C) max = C;
    
    
    cout << max << " is the largest number." << endl;

return 0;
}