#include <iostream>
#include <windows.h>     // for windows systems
using namespace std;

void display(char msg[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << msg[i];
    }
    cout << endl;
}

void rotateLeft(char greet[], int size)
{
    char ch = greet[0];

    for (int i=0; i<size; i++)
    {
        greet[i] = greet[i+1];
    }
    
    greet[size-1] = ch;

}

void rotateRight(char msg[], int size)
{
    char ch = msg[size];

    for (int i=size; i>0; i--)
    {
        msg[i] = msg[i-1];
    }
    
    msg[0] = ch;
}

void sleep(int s){
    //this_thread::sleep_for (chrono::seconds(s));    // linux
    Sleep(s*400);                                    // windows
}

int main()
{
    const int greetsize = 40;
    char greeting[greetsize] = { 'H', 'E', 'L', 'L', 'O' };

    const int funsize = 41;
    char funtext[funsize] = "ARRAY IS NICE TO BE USED & FUN TO PLAY! ";

    while (true)
    {
        system("cls");
            display( greeting, greetsize ); 
        sleep(1);
        rotateRight( greeting, greetsize );
            display( funtext, funsize-1 );
         rotateLeft( funtext, funsize-1 );
        sleep(1);
    }
}