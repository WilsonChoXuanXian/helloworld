#include <iostream>
using namespace std;

int main()
{
    int sum, count;

    int num;

    sum = 0;
    count = 0;

    while(count < 5)
    {
        cout << "Enter a number." << endl;
        cin >> num;

        sum = sum + num;
        count +=1;
    }

    cout << "Sum =" << sum;

return 0;
}