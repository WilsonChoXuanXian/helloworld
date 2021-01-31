#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age: ";
    cin >> age;
    cout << "Hello!" << endl;

    if ( age > 60 )

        {
        cout << "Old fellow" << endl;
        cout << "Happy retirement" << endl;
        }

    cout << "Your age is " << age << endl;
    cout << "Good Bye!" << endl;
    
return 0;

}