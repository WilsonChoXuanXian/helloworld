// This program will read in the amount of chairs sold for each style.
// It will then print the total dollar sales of each style as well as the total sales of all chairs

// CHO XUAN XIAN

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int amountSold_AC , amountSold_M , amountSold_FC; 
    float totalSales_AC , totalSales_M , totalSales_FC , totalSales_ALL;   

    cout << setprecision(2) << fixed << showpoint;   
    cout << "Please input the number of American Colonial chairs sold" << endl;

    cin >> amountSold_AC;

    cout << "Please input the number of Modern chairs sold" << endl;

    cin >> amountSold_M;

    cout << "Please input the number of French classical chairs sold" << endl;

    cin >> amountSold_FC;

    totalSales_AC = amountSold_AC * 85;                                 
    totalSales_M = amountSold_M * 57.50;                                
    totalSales_FC = amountSold_FC * 127.75;                            
    totalSales_ALL = totalSales_AC + totalSales_FC + totalSales_M;      

    cout << "The total sales of American Colonial chairs : $" << totalSales_AC << endl;     

    cout << "The total sales of modern chairs : $" << totalSales_M << endl;              

    cout << "The total sales of French Classical chairs : $" << totalSales_FC << endl;      

    cout << "The total sales of all chairs : $" << totalSales_ALL << endl;                 

return 0;
}