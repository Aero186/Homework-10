#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {

  int n;
  char guess[26];
  char word[16];
  int row;
  int win = 0;
  int lose = 0;
  
  cin >> word;
  cout << "Word is: " << word << endl;
  cin >> guess;
  cout << "Guess is: " << guess << endl;

  for (int i = 0; i <= 15; i++){
    int j = 0;
    while(j <= 25){
      cout << word[i] << " " << guess [j] << endl;
    if(word[i] == guess[j]){
      win++;}
      cout << "<><><><> " << win << endl;
    j++;
    }
  }
  if (win > 6)
    cout << "WIN" << endl;
  if(win < 6)
      cout << "LOSE" << endl;
  }