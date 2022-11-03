// Samuel Peel
// CSCI 130
// 11-2-22
#include <iostream>

using namespace std;

int list[5][3] = {{25, 1450, 62}, {36, 3240, 136}, {44, 1792, 76}, {52, 2360, 105}, {68, 2114, 67}};

struct chart {
  int carNumber;
  int milesDriven;
  int gallonsUsed;
};

int main() {
  
  int list[5][3] = {{25, 1450, 62}, {36, 3240, 136}, {44, 1792, 76}, {52, 2360, 105}, {68, 2114, 67}};
  chart c;

for (int i = 0; i < 5; i++){
    for (int j = 0; j == 0; j++){
      c.carNumber = list[i][j];
      c.milesDriven = list[i][j+1];
      c.gallonsUsed = list[i][j+2];
      cout << c.carNumber << " " << c.milesDriven << " " << c.gallonsUsed << endl; 
      }
  }
  struct chart arr[5]; 

}