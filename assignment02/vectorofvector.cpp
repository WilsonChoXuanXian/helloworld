// Example program
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<vector<int>> a;
    
    vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);

    a.push_back(b);

    vector<int> c;
    c.push_back(1);
    c.push_back(2);

    a.push_back(c);

    cout << "Number of rows: " << a.size() << endl;
    cout << "Number of col in row 0: " << a[0].size() << endl;

    for (int r=0; r<a.size(); r++)
    {
        for (int c=0; c<a[r].size(); c++)
            cout << a[r][c];
        cout << endl;
    }

    cout << "Hello World" << endl;

    return 0;
}