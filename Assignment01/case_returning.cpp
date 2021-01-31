/********************************************
Course : TCP1101 Programming Fundamentals
Session: Trimester 2, 2020/21
Name: CHO XUAN XIAN
ID : 1201302646
Lecture Section : TC1V
Tutorial Section: TT1V
Assignment: 1
Email: 1201302646@student.mmu.edu.my
Phone: +60-1155086875
********************************************/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void main_action();                                     //function prototype

void main_menu(int decimal, char &choice, string mode);

void change_mode(bool &rad, string &mode);

void set_precision(int &decimal);

void invalid_input();

void main_calculation(int decimal, bool rad, string mode);

void sine_calculation(int decimal, long double &sine,
                      long double angle_minimized);

void cosine_calculation(int decimal, long double &cosine, 
                        long double angle_minimized);

long double pow(long double a, int b);
long double fac(int a);
long double absolute(long double a);

/*-----------------------------------------------------------------------------------*/

int main()
{
    main_action();

return 0;
}

void main_action()
{
    int decimal = 10;
    bool rad = 1;
    string mode = "radian";
    char choice;

    do
    {
        system("cls");
        main_menu(decimal, choice, mode);

        switch (choice)
        {
            case '0' :
            {
                cout << "Closing program..." << endl;
                cout << " *~ Goodbye ~* " << endl;
            }
            break;

            case '1' : change_mode(rad, mode);
                       break; 
            
            case '2' : set_precision(decimal);
                       break;

            case '3' : main_calculation(decimal, rad, mode);
                       break;

            default  : invalid_input();
                       break;
        }
    } while (choice != '0');
    
}

void main_menu(int decimal, char &choice, string mode)
{
    cout << "+" << setw(50) << setfill('-') << "+" << setfill(' ') << endl;
    cout << "|" << setw(36) << right << "T R I G O N O M E T R Y" << setw(14) << "|" << endl;
    cout << "+" << setw(50) << setfill('-') << "+" << setfill(' ') << endl;
    cout << "| MODE = " << setw(41) << left << mode << right << "|" << endl;
    cout << "| Decimal precision = " << setw(28) << left << decimal << right << "|" << endl;
    cout << "+" << setw(50) << setfill('-') << "+" << setfill(' ') << endl;
    cout << "| Input number below to proceed :" << setw(18) << "|" << endl;
    cout << "|   1 ==> Switch mode (Radian / Degree)" << setw(12) << "|" << endl;
    cout << "|   2 ==> Set decimal precision" << setw(20) << "|" << endl;
    cout << "|   3 ==> Calculate and display the result" << setw(9) << "|" << endl;
    cout << "|   0 ==> Quit" << setw(37) << "|" << endl;
    cout << "+" << setw(50) << setfill('-') << "+" << setfill(' ') << endl;
    cout << "Enter your choice ==> ";
    cin >> choice; cin.clear(); cin.ignore(20,'\n');
}

void change_mode(bool &rad, string &mode)
{
    if (rad){
        rad = 0;
        mode = "degree";
    }
    else {
        rad = 1;
        mode = "radian";
    }

    cout << endl << "MODE has succesfully changed to : " << mode << "." << endl;
    cout << "press any key to continue..." << endl;
    getch();
}

void set_precision(int &decimal)
{
    cout << "Set Decimal Precision to => ";
    cin >> decimal;
    cout << endl << "press any key to continue..." << endl;
    getch();
}

void invalid_input()
{
    cout << endl << "Invalid, input must be number from the menu..." << endl;
    cout << "Please Try Again..." << endl;
    cout << "press any key to continue..." << endl;
    getch();
}

void main_calculation(int decimal, bool rad, string mode)
{
    long double angle;
    long double angle_minimized;
    long double sine;
    long double cosine;
    long double PI = 3.14159265358979323846264338327950288419716;

    cout << "Enter value of the angle in " << mode << " => ";
    cin >> angle; cin.clear(); cin.ignore(20,'\n');

        if (!rad)
        {
            cout << endl << setprecision(3) << fixed << angle << " Degrees = " << setw(decimal+7);
            angle = ( angle / 180 ) * PI;
            cout << setprecision(decimal) << fixed << angle << " Radians" << endl;
        }

    angle_minimized = angle;

        while (angle_minimized > 2*PI)
        {
            angle_minimized = angle_minimized - 2*PI;
        }

        while (angle_minimized < 0)
        {
            angle_minimized = angle_minimized + 2*PI;
        }

    cout << endl << "computing sine ..." << endl;

        sine_calculation(decimal, sine,
                         angle_minimized);

    cout << endl << "computing cosine ..." << endl;

        cosine_calculation(decimal, cosine, 
                           angle_minimized);

    cout << endl << "RESULTS : " << endl;
    cout << setw(10) << right << " x  = " << setw(decimal+7) << right << angle << " Radians" << endl;
    cout << setw(10) << right << "sin(x) = " << setw(decimal+7) << right << sine << endl;
    cout << setw(10) << right << "cos(x) = " << setw(decimal+7) << right << cosine << endl;
    cout << endl << "press any key to continue..." << endl;
    getch();
}

void sine_calculation(int decimal, long double &sine,
                      long double angle_minimized)
{
    int sgn = 1;
    int i = 1;
    int j = 1;
    long double termN_minus1 = 0.0;
    long double termN = 0.0;
    sine = 0.0;

    do
        {
            sine = sine + sgn*pow(angle_minimized,i)/fac(i);
            sgn = sgn*-1;
            cout << setw(2) << right << j;
            cout << setprecision(decimal) << fixed << " =>" << setw(decimal+7) << sine << endl;
            termN = termN_minus1;
            termN_minus1 = sine;
            i += 2;
            j ++;

        } while (absolute(termN - termN_minus1) > 0.0000000000001);
}

void cosine_calculation(int decimal, long double &cosine, 
                        long double angle_minimized)
{
    int sgn = -1;
    int i = 2;
    int j = 1;
    long double termN_minus1 = 0.0;
    long double termN = 0.0;
    cosine = 1.0;

    do
        {
            cosine = cosine + sgn*pow(angle_minimized,i)/fac(i);
            sgn = sgn*-1;
            cout << setw(2) << right << j;
            cout << setprecision(decimal) << fixed << " =>" << setw(decimal+7) << cosine << endl;
            termN = termN_minus1;
            termN_minus1 = cosine;
            i += 2;
            j ++;
            
        } while (absolute(termN - termN_minus1) > 0.0000000000001);
}

// Below are the maths functions I created to use for Taylor Series

long double pow(long double a, int b)
{
    int n = 1;
    long double power = 1;
    while (n <= b)
    {
        power = power * a;

        n +=1;
    }

return power;   
}

long double fac(int a)
{
    int c = 1;
    long double factorial = 1;
    while (c <= a)
    {
        factorial = factorial * c;
        c += 1;
    }
    
return factorial;
}

long double absolute(long double a)
{
    if (a < 0)
        return -a;
    else
        return a;
}