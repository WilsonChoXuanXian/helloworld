#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>     // for windows systems

using namespace std;
const int sz = 5;

char letter_a[5][5]={{' ','A','A','A',' '},
              {'A',' ',' ',' ','A'},
              {'A','A','A','A','A'},
              {'A',' ',' ',' ','A'},
              {'A',' ',' ',' ','A'}};

char letter_h[5][5]={{'H',' ',' ',' ','H'},
                     {'H',' ',' ',' ','H'},
                     {'H','H','H','H','H'},
                     {'H',' ',' ',' ','H'},
                     {'H',' ',' ',' ','H'}};

char letter_l[5][5]={{'L',' ',' ',' ',' '},
                     {'L',' ',' ',' ',' '},
                     {'L',' ',' ',' ',' '},
                     {'L',' ',' ',' ',' '},
                     {'L','L','L','L','L'}};              

void A(){
    for (int i=0;i<sz;i++)
    {
       for (int j=0;j<sz;j++)
            cout << letter_a[i][j];
       cout << endl;
    }
    cout << endl;   
}

void B(){
    cout << "BBBB" << endl;
    cout << "B   B" << endl;
    cout << "BBBB" << endl;
    cout << "B   B" << endl;
    cout << "BBBB " << endl; 
    cout << endl;   
}

void H(){
    cout << "H   H" << endl;
    cout << "H   H" << endl;
    cout << "HHHHH" << endl;
    cout << "H   H" << endl;
    cout << "H   H" << endl; 
    cout << endl;   
}

void E(){
    cout << "EEEEE" << endl;
    cout << "E    " << endl;
    cout << "EEEEE" << endl;
    cout << "E   " << endl;
    cout << "EEEEE" << endl;    
    cout << endl;
}

void L(){
    cout << "L" << endl;
    cout << "L   " << endl;
    cout << "L" << endl;
    cout << "L   " << endl;
    cout << "LLLLL" << endl;    
    cout << endl;
}

void O(){
    cout << " OOO " << endl;
    cout << "O   O" << endl;
    cout << "O   O" << endl;
    cout << "O   O" << endl;
    cout << " OOO " << endl;    
    cout << endl;
}

void EX(){
    cout << "  !" << endl;
    cout << "  !" << endl;
    cout << "  !" << endl;
    cout << "   " << endl;
    cout << "  !" << endl;  
    cout << endl;  
}

void test(){
    H();
    E();
    L();
    L();
    O();
    EX();
}

//Ex 1.2
void showLetter (char ch){
    switch(ch)
    {
        case 'A': A(); break;
        case 'B': B(); break;
        case 'H': H(); break;
        case 'E': E(); break;
        case 'L': L(); break;    
        case 'O': O(); break;
        case '!': EX(); break;
    }
}

//ex1.3
// array version
void ShowMessage(char ch[],int size)
{
    for (int i=0;i<size;i++)
        showLetter(ch[i]);
}

//string version: string can be accessed as
// an array of chars
void ShowMessage(string ch)
{
    for (int i=0;i<ch.length();i++)
        showLetter(ch[i]);
}

// ex1.4
void sleep(int s){
    //this_thread::sleep_for (chrono::seconds(s));    // linux
    Sleep(s*1000);                                    // windows
    system("cls");   // windows: system("cls");
}

// manual rotation
void display(int tm){    
    ShowMessage("HELLO!");
    sleep(tm);
    ShowMessage("ELLO!H");
    sleep(tm);
    ShowMessage("LLO!HE");
    sleep(tm);
    ShowMessage("LO!HEL");
    sleep(tm);
    ShowMessage("O!HELL");
    sleep(tm);
    ShowMessage("!HELLO");
    sleep(tm);
    ShowMessage("HELLO!");
}

//shif the letters in the array
void shiftArray(char msg[], int size){
    char ch = msg[0];
    for (int j=0;j<size-1;j++)
        msg[j] = msg[j+1];

    msg[size-1] = ch;  
}

// Ex 1.4 and 1.5
void display(char msg[], int size, int tm){
    for (int i=0; i<size;i++)   // the loop of ex1.5
    {        
        ShowMessage(msg);
        sleep(tm);
        shiftArray(msg,size);
    }
}
// shifting letters in a string is the same of the array
// if you pass char array as parameter it is passed by pointer
// and any change will change the original array in the caller
// 
// strings are passed by value therefore you must pass them
// by reference & if you want to change the caller 
// actual parameter
void shiftString(string &msg){
    int size = msg.length();
    char ch = msg[0];
    for (int j=0;j<size-1;j++)
        msg[j] = msg[j+1];
    msg[size-1] = ch;  
}

// using string 
// it uses ShowMessage with string parameter
void display(string msg, int tm)
{
    int size = msg.length();
    for (int i=0; i<size;i++)
    {        
        ShowMessage(msg);
        sleep(tm);      
        shiftString(msg);
    }
}

int main()
{
    //test();    
    //showLetter('L');
    
    //char msg[] = "HELLO!";
    //ShowMessage(msg,6);

    //display(2);
    
    //char msg[] = "HELLO!";
    //display(msg,6,1);   

    //
    // ex 1.6
    //

     string str;
     cout << "Enter any pattern using (HELO!): ";
     cin >> str;
     display(str,1);

    /*char matrix[5][21];    // 15 for the letters and 6 for spaces

    for (int i=0;i<sz;i++)
    {
        int col = 0;

        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_a[i][j];

        for (int j=0;j<3;j++)
            matrix[i][col++]=' ';

        for (int j=0;j<sz;j++)
            matrix[i][col++]= letter_l[i][j];
        
        for (int j=0;j<3;j++)
            matrix[i][col++]=' ';

        for (int j=0;j<sz;j++)
            matrix[i][col++]= letter_h[i][j];
    }


    for (int i=0;i<sz;i++)
    {
        for (int j=0; j<21; j++)
            cout << matrix[i][j];
        cout << endl;
    }*/


    return 0;
}