#include <iostream>
using namespace std;

int main()
{
    int c;
    c = 0;

    cout << "This program display numbers from 0 to 99." << endl;

    do
    {
        cout << c << " ";
        c += 1;
    } while (c <= 99);
    
return 0;
}