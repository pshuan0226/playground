#include <cmath>
#include <iostream>
using namespace std;

void fld();

int main(){
  while(1){
    fld();
  }
  return 0;
}

void fld(){
  int input;
  int last;
  int first;

  cout << "Enter a number with more than one digit: ";
  cin >> input;

  if(cin.fail()){
    cin.clear();
    cin.ignore();
    cout << "An INTEGER plz" << endl;
    fld();
  }
  else if(input > 9){
    last = input % 10;
    while (input >= 10){
      input /= 10;
    }
    first = input;
    cout << last + first << endl;
  }
  else if(input < 10){
    fld();
  }
}
