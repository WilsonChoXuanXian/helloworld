#include <iostream>
using namespace std;

void display(char msg[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << msg[i];
    }
    cout << endl;
}

void rotateRight(char msg[], int size)
{
    char ch = msg[size];

    for (int i = size; i>0; i--)
    {
        msg[i] = msg[i-1];
    }
    
    msg[0] = ch;

}

int main()
{
    const int funsize = 41;
    char funtext[funsize] = "ARRAY IS NICE TO BE USED & FUN TO PLAY! ";

        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
        display( funtext, funsize-1 );
    rotateRight( funtext, funsize-1 );
}