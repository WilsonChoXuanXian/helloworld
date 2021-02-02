#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

const int sz = 5;

char letter_w[5][5]={{'W',' ','W',' ','W'},
                     {'W',' ','W',' ','W'},
                     {'W',' ','W',' ','W'},
                     {'W',' ','W',' ','W'},
                     {' ','W',' ','W',' '}};

char letter_e[5][5]={{'E','E','E','E','E'},
                     {'E',' ',' ',' ',' '},
                     {'E','E','E','E','E'},
                     {'E',' ',' ',' ',' '},
                     {'E','E','E','E','E'}};

char letter_l[5][5]={{'L',' ',' ',' ',' '},
                     {'L',' ',' ',' ',' '},
                     {'L',' ',' ',' ',' '},
                     {'L',' ',' ',' ',' '},
                     {'L','L','L','L','L'}};              

char letter_c[5][5]={{' ','C','C','C','C'},
                     {'C',' ',' ',' ',' '},
                     {'C',' ',' ',' ',' '},
                     {'C',' ',' ',' ',' '},
                     {' ','C','C','C','C'}};

char letter_o[5][5]={{' ','O','O','O',' '},
                     {'O',' ',' ',' ','O'},
                     {'O',' ',' ',' ','O'},
                     {'O',' ',' ',' ','O'},
                     {' ','O','O','O',' '}}; 

char letter_m[5][5]={{' ','M',' ','M',' '},
                     {'M',' ','M',' ','M'},
                     {'M',' ','M',' ','M'},
                     {'M',' ','M',' ','M'},
                     {'M',' ','M',' ','M'}}; 

char letter_t[5][5]={{'T','T','T','T','T'},
                     {' ',' ','T',' ',' '},
                     {' ',' ','T',' ',' '},
                     {' ',' ','T',' ',' '},
                     {' ',' ','T',' ',' '}};

char letter_a[5][5]={{' ','A','A','A',' '},
                     {'A',' ',' ',' ','A'},
                     {'A','A','A','A','A'},
                     {'A',' ',' ',' ','A'},
                     {'A',' ',' ',' ','A'}};

char letter_r[5][5]={{'R','R','R','R','R'},
                     {'R',' ',' ',' ','R'},
                     {'R','R','R','R','R'},
                     {'R',' ',' ','R',' '},
                     {'R',' ',' ',' ','R'}};

char letter_s[5][5]={{'S','S','S','S','S'},
                     {'S',' ',' ',' ',' '},
                     {'S','S','S','S','S'},
                     {' ',' ',' ',' ','S'},
                     {'S','S','S','S','S'}};

void shiftLetter(char matrix[][128])
{
    char ch[sz][8];

    for (int i=0;i<sz;i++)
    {
        for (int j=0;j<8;j++)
        ch[i][j] = matrix[i][j];
    }

    for (int i=0;i<sz;i++)
    {
        for (int j=0;j<120;j++)
        matrix[i][j] = matrix[i][j+8];
    }

    for (int i=0;i<sz;i++)
    {
        for (int j=0;j<8;j++)
        matrix[i][j+120] = ch[i][j];
    }

}

void sleep(int s){
    Sleep(s*400);
    system("cls");
}

void spaces(char matrix[][128], int row, int &column){
    for (int i=0;i<3;i++)
            matrix[row][column++]=' ';
}

void setLetter(char matrix[][128]){
    for (int i=0;i<sz;i++)
    {
        int col=0;

        for (int j=0;j<sz;j++)
            matrix[i][col++] = ' ';
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_w[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++]= letter_e[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++]= letter_l[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_c[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_o[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_m[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_e[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = ' ';
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_t[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_o[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = ' ';
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_m[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_a[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_r[i][j];
        spaces(matrix,i,col);
        for (int j=0;j<sz;j++)
            matrix[i][col++] = letter_s[i][j];
        spaces(matrix,i,col);
    }
}

void printLetter(char matrix[][128], int size, int time){
        
    system("cls");
    setLetter(matrix);
    for (int i=0; i<=size;i++)
    {   
        sleep(time);
        for (int i=0;i<sz;i++)
        {
            for (int j=0; j<128; j++)
                cout << matrix[i][j];
            cout << endl;
        }
        shiftLetter(matrix);
    }
}

int main()
{
    int time=1;
    int numOfWords=16;
    char welcome[sz][128];    // 80 for the letters and 48 for spaces

    printLetter(welcome,numOfWords,time);
    cout << endl;
    system("pause");

    return 0;
}