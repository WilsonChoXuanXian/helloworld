#include <iostream>
using namespace std;

int main(){

    int x=0;
    
    while(x<9){
        x++;
        if(x%2 == 1) continue;
        cout << x << endl;
    }
}