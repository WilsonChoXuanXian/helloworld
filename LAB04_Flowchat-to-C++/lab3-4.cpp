#include <iostream>
using namespace std;

int main()
{
    int y;

    cout << "Enter values for Y." << endl;

    cout << "Y : ";
    cin >> y;

    int factorial = 1;
    int count = 1;


    while (count <= y)
    {
        cout << count;

            if (count < y)
            {
                cout << "*";
            }
        
        factorial = factorial * count;
        count += 1;

    }
    
    cout << " = " << factorial
         << endl
         << "Factorial = " << factorial;

return 0;
}

// NOTE : By entering 20 as the input, the output shows a wrong result. This is because an overflow occurs.