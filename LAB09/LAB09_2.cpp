#include <iostream>
using namespace std;

void display(char greet[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << greet[i];
    }
    cout << endl;
}

void rotateLeft(char greet[], int size)
{
    char ch = greet[0];

    for (int i = 0; i<size; i++)
    {
        greet[i] = greet[i+1];
    }
    
    greet[size-1] = ch;

}

int main()
{
    const int greetsize = 40;
    char greeting[greetsize] = { 'H', 'E', 'L', 'L', 'O' };

        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
        display( greeting, greetsize );
     rotateLeft( greeting, greetsize );
}