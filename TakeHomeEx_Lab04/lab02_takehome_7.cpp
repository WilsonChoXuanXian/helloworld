#include <iostream>
using namespace std;

long double pow(long double a, int b){
    int n = 1;
    long double power = 1.0l;
    while (n <= b)
    {
        power = power * a;

        n +=1;
    }
return power;
}

int fac(int a){
    int c = 1;
    int factorial = 1;
    while (c <= a)
    {
        factorial = factorial * c;
        c += 1;
    }
    
return factorial;
}

int main()
{
    long double x;
    long double c, s, sgn;

    cout << "This program output the result of sin(x) which x is the value you input." << endl;
    cout << "x: ";
    cin >> x;

    c = 1.0;
    s = 0.0;
    sgn = 1;
    do
    {
        s = s + sgn*pow(x,c)/fac(c);

        sgn = sgn*-1;
        c += 2;

    } while (c <= 7);
    
    cout << "sin(" << x << ") = " << s << endl;

return 0;
}