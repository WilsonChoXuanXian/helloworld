#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter your mark: ";
    cin >> n;

    if (n <= 100 && n >= 80) cout << "A" << endl;

    else if (n < 80 && n >= 70) cout << "B" << endl;

    else if (n < 70 && n >= 50) cout << "C" << endl;

    else if (n >= 0 && n < 50)cout << "F" << endl;

    else cout << "Invalid Input..." << endl;
    
return 0;
}