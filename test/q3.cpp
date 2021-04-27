#include <iostream>
using namespace std;

int main(){
    char **p, *q;
    char ch = 'a';
    q = &ch;
    p = &q;

    cout << char(*q+1) << endl;             // This print 'b'
    // cout << char(**p++) << endl;         // This prints 'a', then only increment by 1
    cout << char(ch+1) << endl;             // This print 'b'
    cout << char(**p+1) << endl;            // This print 'b'

    return 0;
}