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

    int product = 1;
    int count = x;


    while (count <= y)
    {
        cout << count;

            if (count < y)
            {
                cout << "*";
            }
        
        product = product * count;
        count += 1;

    }
    
    cout << " = " << product
         << endl
         << "Product = " << product;

return 0;
}