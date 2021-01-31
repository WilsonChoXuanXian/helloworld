#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x;
    srand(time(0));

    x = rand()%2;

    cout << x << endl;

return 0;

}