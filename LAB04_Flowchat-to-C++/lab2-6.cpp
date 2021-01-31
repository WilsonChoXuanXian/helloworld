#include <iostream>
using namespace std;

int main()
{
    int x,y;

    cout << "Enter values for x and y (x < y):" << endl;
    cout << "X : ";
    cin >> x;

    cin.ignore();

    cout << "Y : ";
    cin >> y;

    int count = x;

    while(count <= y)
    {
        cout << count << " ";
        count += 1;
    }

return 0;
}