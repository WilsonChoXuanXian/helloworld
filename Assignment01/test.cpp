#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
using namespace std;

long double pow(long double a, int b){
    int n = 1;
    long double power = 1;
    while (n <= b)
    {
        power = power * a;

        n +=1;
    }
return power;   
}

long double fac(int a){
    int c = 1;
    long double factorial = 1;
    while (c <= a)
    {
        factorial = factorial * c;
        c += 1;
    }
    
return factorial;
}

long double fabs(long double a){
    if (a < 0)
        return -a;
    else
        return a;
    
}

// aboves are the maths functions i created to call into the main function.

int main()
{
    bool rad = 1;
    string mode = "radian";
    int decimal = 10;
    int choice;

do
{
    do
    {
        do
        {
            system("cls");
            cout << "+" << setw(50) << setfill('-') << "+" << endl;
            cout << "|             T R I G O N O M E T R Y             |" << endl;
            cout << "+" << setw(50) << setfill('-') << "+" << endl;
            cout << "| MODE = " << mode << setw(36) << setfill(' ') << right << "|" << endl;
            cout << "| Decimal precision = " << decimal << setw(27) << "|" << endl;
            cout << "+" << setw(50) << setfill('-') << "+" << setfill(' ') << endl;
            cout << "| Input number below to proceed :" << setw(18) << "|" << endl;
            cout << "|   1 ==> Switch mode (Radian / Degree)" << setw(12) << "|" << endl;
            cout << "|   2 ==> Set decimal precision" << setw(20) << "|" << endl;
            cout << "|   3 ==> Calculate and display the result" << setw(9) << "|" << endl;
            cout << "|   0 ==> Quit" << setw(37) << "|" << endl;
            cout << "+" << setw(50) << setfill('-') << "+" << endl;
            cout << setfill(' ');
            cout << "Enter your choice ==> ";
            cin >> choice;

                if (choice == 0)
                {
                    cout << "Closing program..." << endl;
                    cout << " *~ Goodbye ~* " << endl;

                    return 0;
                }
                    
                if (choice == 1)
                {
                    cout << "Input '1' for RADIAN mode, or input '0' for DEGREE mode => ";
                    cin >> rad; cin.clear(); cin.ignore(100,'\n');
                        
                        if (rad)
                            mode = "radian";
                        else 
                            mode = "degree";

                    cout << endl << "press any key to continue..." << endl;
                    getch();
                }

        } while (choice == 1);

            if (choice == 2)
            {
                cout << "Set Decimal Precision to => ";
                cin >> decimal;
                cout << endl << "press any key to continue..." << endl;
                getch();
            }
            

    } while (choice == 2);

        if (choice == 3)
        {
            int sgn = 1;
            int i = 1;
            int j = 1;
            long double x;
            long double sin = 0.0;
            long double s1 = 0.0;
            long double s2 = 0.0;
            long double PI = 3.14159265358979323846264338327950288419716;

            cout << "Enter value of the angle in " << mode << " => ";
            cin >> x;

                if (rad == 0)
                {
                    cout << endl << x << " Degrees = " << setw(10);
                    x = x * PI / (long double)180.0 ;
                    cout << x << " Radians" << endl;
                }

                cout << endl << "computing sine ..." << endl;

                do
                {
                    sin = sin + sgn*pow(x,i)/fac(i) ;
                    sgn = sgn*-1;
                    cout << setw(2) << right << j;
                    cout << setprecision(decimal) << fixed << "=>" << setw(20) << sin << endl;
                    s2 = s1;
                    s1 = sin;
                    i += 2;
                    j ++;

                } while (fabs(s2 - s1) > 0.0000000001);

                cout << endl << "computing cosine ..." << endl;

                /*do
                {
                    
                } while ();*/

                cout << endl << "press any key to continue..." << endl;
                getch();

        }
        else
        {
            cout << endl << "Invalid input, Please Try Again..." << endl;
            cout << "press any key to continue..." << endl;
            getch();
            cout << endl;
        }
        

} while (choice >= 3 || choice < 0);


}