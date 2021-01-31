#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    cout << "Hello!" << endl;

    if ( age > 50 )
    {
        cout << "Old fellow" << endl;
        cout << "Happy retirement" << endl;
    }
    else
    {
        if (age > 5)
        {
            cout << "Young fellow" << endl;
            cout << "Work hard" << endl;
        }
        else
        {
            cout << "un gerr gerr..." << endl;
        }
            
    }
        

    cout << "Your age is " << age << endl;
    cout << "Good Bye!" << endl;
    
return 0;

}