#include <iostream>
using namespace std;

int main()
{
    system("cls");

    const int N = 9;
    int i;
    int j;
    int k = 1;

    i = N/2;
        while ( i >= 0 )
        {
            j = 1;

            while ( j <= i )
            {
                cout << ".";
                j = j + 1;
            } 

            while (i >= k)
            {
                cout << "*";
                k = k + 2;
            }
            
            cout << endl;
            i = i - 1;
        }

 return 0;
} 