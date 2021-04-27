#include <iostream>
using namespace std;

int function(int array[], int size, int target){
    int n=0;
    for(int i=0;i<size;i++){
    if(array[i] = target)
        n++;
    }
    return n;
}

int main(){
    int array[] = {3,4,6,4,3};
    cout << function(array,5,2) << endl;

    return 0;
}