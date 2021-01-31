// This program will read in 3 grades from the keyboard.
// It will then print the average (to 2 decimal places) of those grades to the screen.

// CHO XUAN XIAN

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float grade01 , grade02 , grade03 , gradeAvg;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the first grade" << endl;

    cin >> grade01;

    cout << "Please input the second grade" << endl;

    cin >> grade02;

    cout << "Please input the third grade" << endl;

    cin >> grade03;

    gradeAvg = (grade01 + grade02 + grade03) / 3;                       

    cout << "The average of the three grades is " << gradeAvg << endl; 

return 0;
}