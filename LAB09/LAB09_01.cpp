#include <iostream>
using namespace std;

void display(char greet[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << greet[i];
    }
    
}

int main()
{
    const int greetsize = 40;
    char greeting[greetsize] = { 'H', 'E', 'L', 'L', 'O' };
    display( greeting, greetsize );
}