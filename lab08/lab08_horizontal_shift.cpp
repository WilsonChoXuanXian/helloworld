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

void shiftLetter(char matrix[][24])
{
    char ch[5][8];

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<8;j++)
        ch[i][j] = matrix[i][j];
    }

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<16;j++)
        matrix[i][j] = matrix[i][j+8];
    }

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<8;j++)
        matrix[i][j+16] = ch[i][j];
    }

}

void sleep(int s){
    //this_thread::sleep_for (chrono::seconds(s));    // linux
    Sleep(s*1000);                                    // windows
    system("cls");   // windows: system("cls");
}

int main()
{
    int time=1;
    int size=3;
    char matrix[5][24];    // 15 for the letters and 9 for spaces

    system("cls");

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

        for (int j=0;j<3;j++)
            matrix[i][col++]=' ';
    }


    for (int i=0;i<sz;i++)
    {
        for (int j=0; j<24; j++)
            cout << matrix[i][j];
        cout << endl;
    }

//-------------------------------------------------

    for (int i=0; i<size;i++)
    {        
        sleep(time);
        shiftLetter(matrix);

        for (int i=0;i<sz;i++)
        {
            for (int j=0; j<24; j++)
                cout << matrix[i][j];
            cout << endl;
        }
    }

    
    return 0;
}