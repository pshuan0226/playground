#include<string>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
  string withdraw = "";
  string money = "";
  cin >> withdraw;
  cin >> money;

  double w = stod(withdraw);
  double m = stod(money);

  if((fmod(w, 5) != 0) || (w + 0.5) > m){
    cout << m;
  }
  else{
    cout << m - w - 0.5;
  }
  return 0;
}
