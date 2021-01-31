#include <iostream>
#include <conio.h>
using namespace std;

bool getChoice(){
    char ch;
    bool cont;

    cin.clear();
        cin.ignore(20,'\n');
        cout << "Do you want to play again?";
        ch = getchar();
        switch(ch){
            case 'y':
            case 'Y': cont = true; 
                      break;
            case 'n':
            case 'N': cont = false; 
                      break;
            default: 
                     cout << " Wrong choice, bye..." << endl;
        }
    return cont;
}

int main() {
    int num1, num2, num3, num4;
    int maxTrials;
    char ch;
    bool cont = false;

    do{
    
        cout << "Let us play!" << endl;
        cout << "Please enter 4 secret number (separated by spaces) => ";
        cin >> num1 >> num2 >> num3 >> num4;
        cout << "Now go get a friend and ask him/her to guess the numbers!" << endl;
       
        system("cls");  // after this line the user part

        cout << "Enter max number of trials:";
        cin >> maxTrials;

        cout << "Let us see if you can read my mind!" << endl;
        
        int trialNum = 0;
        bool done = false;
        bool win = false;

        while (!done) {
            int guess1, guess2, guess3, guess4;

            cout << "Trial #" << trialNum+1 << endl;

            cout << "Please enter 4 number (separated by spaces) => ";
            cin >> guess1 >> guess2 >> guess3 >> guess4;
            
            int white, black;
            white = black = 0;        //reset to zero
            if (guess1 == num1) white = white + 1;
                else if(guess1 == num2) black = black + 1;
                else if(guess1 == num3) black = black + 1;
                else if(guess1 == num4) black = black + 1;

            if (guess2 == num2) white = white + 1;
                else if(guess2 == num1) black = black + 1;
                else if(guess2 == num3) black = black + 1;
                else if(guess2 == num4) black = black + 1;

            if (guess3 == num3) white = white + 1;
                else if(guess3 == num1) black = black + 1;
                else if(guess3 == num2) black = black + 1;
                else if(guess3 == num4) black = black + 1;

            if (guess4 == num4) white = white + 1;
                else if(guess4 == num1) black = black + 1;
                else if(guess4 == num2) black = black + 1;
                else if(guess4 == num3) black = black + 1;

            cout << "You gained " << white << " WHITE point and " << black << " BLACK point." << endl;
            cout << endl;

            if ( white == 4 ) {
                win = true;
                done = true;
            }

            if (trialNum == maxTrials) {
                done = true;
            }

            trialNum = trialNum + 1;
        }
        
        if (win) {
            cout << "Congratulation!!" << endl;
            if (trialNum <= 2)
                cout << "You must be Harry Potter!" << endl;
            else
                if (trialNum <= 5)
                    cout << "Not bad !!" << endl;
                else
                    cout << "You are just being lucky!" << endl;
        }else{
            cout << "You failed to read my mind......"
                 << " go learn from Harry Potter!"
                 << endl;
            cout << "You lost!" << endl;
        }

        cont = getChoice();
        
    } while(cont);
    return 0;
}