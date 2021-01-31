#include <iostream>
#include <iomanip>
using namespace std;

float pow(float a, int b){
    int n = 0;
    int power = 1;
    while (n < b)
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

float fabs(float a){
    float fabs;
    if (a < 0)
    {
        fabs = -a;
    }
    
return fabs;
}

int main(){
    cout << pow(2,8) << endl;
    cout << fac(12) << endl;
    cout << setprecision(10) << fixed << fabs(- 1 - 3.1415926535) << endl;
return 0;
}
