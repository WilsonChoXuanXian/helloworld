#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

void mul (int &n)
{
    n = 20;
}

int main(){
    int n = 4, m = 5;
    mul( m );
    cout << n;

return 0;
}
