#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter values for X and Y." << endl;
    cout << "X : ";
    cin >> x;

    cout << "Y : ";
    cin >> y;

    int sum = 0;
    int count = x;


    while (count <= y)
    {
        cout << count;

            if (count < y)
            {
                cout << "+";
            }
        
        sum = sum + count;
        count += 1;

    }
    
    cout << " = " << sum
         << endl
         << "Sum = " << sum;

return 0;
}