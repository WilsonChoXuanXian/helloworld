#include <iostream>

using namespace std;

int main()
{
    int x = 0376;
    int y = 376;
    int z = 0x10;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;

    cout << endl << endl;

    cout << "x: " << oct << x << endl;
    cout << "y: " << dec << y << endl;
    cout << "z: " << hex << z << endl;

    return 0;
}