#include <iostream>
using namespace std;

int main()
{
    int A, B, max;

    cout << "Input 2 numbers that you want to compare." << endl;
    cout << "A: ";
    cin >> A;

    cout << "B: ";
    cin >> B;

    max = A;

    if ( max < B) max = B;
    
    cout << max << " is the larger number." << endl;

return 0;
}