#include <iostream>
#include <iomanip>
using namespace std;

void  getData( long long ids[],double  mrks[],int sz )
{
    for (int i=0; i<sz; i++)
    {
        cout << "Student " << i << endl;
        cout << "Enter  ID    = ";
        cin >> ids[i];
        cout << "Enter Marks  = ";
        cin >> mrks[i];
    }
}

void display( long long ids[],double  mrks[],int sz )
{
    cout << "    ID    " << setw(4) << " " << " marks" << endl;
    cout << "----------" << setw(4) << " " << "------" << endl;
    for (int i=0; i< sz; i++)
    {
        cout << setw(10) <<  ids[i] 
             << setw(4) << " " 
             << setw(6) << setprecision(2) << mrks[i] << endl;
    }
}

double getAverageMarks( double  mrks[], int sz )
{
    double sum = 0.0;
    for (int i=0; i< sz; i++)
    {
        sum = sum + mrks[i];
    }        
    return sum / sz;
}

double getFailureRate( double  mrks[], int sz )
{
    int failed = 0;
    for (int i=0; i< sz; i++)
    {
        if (mrks[i] < 50)
            failed = failed + 1;
    }
    double prec = ((double)failed / sz)*100;
    return prec;
}

int getRecordOfLowestMarks( double  mrks[], int sz )
{
    double minMark = mrks[0];
    int pos = 0;
    for (int i=1; i< sz; i++)
    {
        if (mrks[i] < minMark)
        {
            minMark = mrks[i];
            pos = i;
        }
    }
    return pos;
}

int getRecordWithID( long long ids[], int sz, double tID )
{
    int pos = -1;
    for (int i=0; i< sz; i++)
    {
        if (ids[i] == tID)
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int main()
{
    const int size = 5;
    long long ID[size];
    double marks[size];

    getData( ID, marks, size );
    display( ID, marks, size );
    
    cout << "Average = ";
    cout << getAverageMarks( marks, size ) << endl;
    cout << endl;
    
    cout << "Failure Rate = ";
    cout << getFailureRate( marks, size ) << " %" << endl;
    cout << endl;
    
    int recordOfLowest = getRecordOfLowestMarks( marks, size );
    
    cout << "Record of Lowest Marks => " << endl;
    cout << "Record No  = " <<recordOfLowest << endl
         << "  ID = " << ID[recordOfLowest] << endl
         << "  Marks = " << marks[recordOfLowest] 
         << endl << endl;

    long long targetID;
    cout << "Enter ID to search marks => ";
    cin >> targetID;

    int recordNo = getRecordWithID( ID, size, targetID );
    
    if ( recordNo != -1 )
        cout << "Marks = " << marks[recordNo] << endl;
    else
        cout << "Marks not found!" << endl;
    return 0;
}
