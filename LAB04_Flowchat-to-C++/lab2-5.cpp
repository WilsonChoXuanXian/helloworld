#include <iostream>
using namespace std;

int main()
{
    int count;
    count = 10;

    while(count > 0)
    {
        if (count % 2 == 0)
        {
            cout << count << " ";
        }

        count -= 1;
    }

    cout << endl
         <<"end of the program" << endl;

return 0;
}