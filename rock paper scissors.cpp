#include <iostream>
#include <string>
using namespace std;

int main() {
  string x;
  cout << "Let's play rock paper scissors"<<endl; 
  cin >> x; 
  if (x == "rock") {
  cout << "You lost!\n";
  }
  else if (x == "paper") {
  cout << "We tied!\n";
  }
  else if (x == "scissors") {
  cout << "You won!\n";
 }
 else {
  cout << "That wasn't an option\n";
cout << "Let's play rock paper scissors again!"<<endl; 
cin >> x; 
if (x == "rock") {
cout << "!!!\n";
}
else if (x == "paper") {
cout << "!!\n";
}
else if (x == "scissors") {
cout << "!!\n";
}else {
cout << "!";
  }
 }
  
  return 0;
}
