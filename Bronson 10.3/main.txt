// Samuel Peel 
// CSCI 130
// 11-2-22
#include <iostream>

using namespace std;

int main() {
  const int NUMS = 5;
  
int nums[NUMS] = {16, 54, 7, 43, -5};
int total = 0, *nPt;
  
nPt = nums; // store address of nums[0] in nPt
  
for (int temp = 16; temp < (16+5); temp++ )
  total += *nPt++;

cout << "The total of the array elements is " << total << endl;
return 0;
}