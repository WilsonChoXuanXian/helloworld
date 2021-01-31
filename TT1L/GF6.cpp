#include <iostream>

using namespace std;

int main()
{
    double a , x , y , z;
    cout << "input x , y and z." << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    a =  (x * x * x * x * x + y) / 10 - z;
    
    cout << "a: " << a << endl;

    return 0;
}