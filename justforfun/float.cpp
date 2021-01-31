#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x = 3.1415926535;
    double y = 3.1415926535;

    cout << setprecision(10) << fixed << y << endl;
    cout << setprecision(10) << y << endl;

return 0;


}