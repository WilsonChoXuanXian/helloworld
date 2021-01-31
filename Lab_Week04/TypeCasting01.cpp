// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// CHO XUAN XIAN

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
    float batAvg;

    batAvg = (float)HITS / (float)AT_BAT;
    cout << "The batting average is " << batAvg << endl;

    return 0;
}

//Exercise 1: 
//Run this program and record the results. The batting average is 0.

//Exercise 2:
//There is a logic error in this program centering around data types.
//Does changing the data type of batavg from int to float solve the problem? 
//Make that change and run the program again and record the result.
//The batting average is 0.