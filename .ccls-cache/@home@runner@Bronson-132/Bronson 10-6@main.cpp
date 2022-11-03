// Samuel Peel
// CSCI 130
// 11-2-22
#include <iostream>

using namespace std;

const int ROWS = 2;
const int COLS = 3;
void arr(int [] [COLS]);

int main(){
  
int nums[ROWS][COLS] = { {33,16,29}, {54,67,99}};
arr(nums);

cout << "\nNo it is not valid, as running nums as nums[1][2] breaks the code. This works because val = nums, so val[1][2] == nums[1][2]" << endl;
return 0;
}

void arr(int (*val) [3]){
  
cout << endl << *(*val);
cout << endl << *(*val + 1);
cout << endl << *(*(val + 1) + 2);
cout << endl << *(*val) + 1;

  return;
}