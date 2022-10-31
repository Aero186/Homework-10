// Samuel Peel
//CSCI 130
// 10-31-22
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {

  char guess[26];
  char word[16];
  int win = 0;

  
  cin >> word;
  //cout << "Word is: " << word << endl;
  cin >> guess;
  //cout << "Guess is: " << guess << endl;

  for (int i = 0; i <= 15; i++){
    int j = 0;
    while(j <= 25){
    if (word[i] == guess[j+1])
      cout << "LOSE" << endl;
      return 39;
      //cout << word[i] << " " << guess [j] << endl;
    if(word[i] == guess[j]){
      win++;
      }
      //cout << "<><><><> " << win << endl;
    j++;
    }
  }
  if (win < 10)
    cout << "WIN" << endl;
  if(win > 10)
      cout << "LOSE" << endl;
}