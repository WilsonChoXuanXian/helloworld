#include <iostream>
using namespace std;

int main()
{
    int s, c;

    cout << "Please enter the total sales made." << endl;
    cin >> s;

    if (s != 0)
    {
        if (s > 0 && s < 1000) c = s * 5/100;

        if (s >= 1000 && s <= 2000) c = s * 8/100;

        if (s > 2000) c = s * 10/100;

        cout << "The total commission earned = " << c << endl;   
    }

return 0;
}