/* Lab Test Q2
  Instruction: Fix error to get correct result
  Purpose: Input an integer, print the sum from 1 to that integer */
#include <iostream>
using namespace std;

void run() {
   int num, sum=0;
   cout << "Input => "; //DO NOT change this line
   cin >> num;
   
   for (int count=1; count<=num; ++count) {
      sum += count;
   }
   cout << sum << endl;
}

//WARNING: DO NOT MODIFY BELOW THIS LINE
int main() {
  cout << "Number of runs => ";
  int numOfRuns; cin >> numOfRuns;
  for (int i=0; i < numOfRuns; ++i) { run(); }
}