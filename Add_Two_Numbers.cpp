#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main(){
  char input[41];
  int point = 0;
  int i = 0;
  char a[20];
  char b[20];
  int x;
  int y;
  int result = 0;
  string line = "";
  string a_string = "";
  string b_string = "";

  while(1){
    cout << "Enter 2 numbers please: ";
    getline(cin, line);

    while(i < line.length()){
      if(line.at(i) == char(32)){
        input[i] = 'b';
      }
      else{
        input[i] = line.at(i);
      }
      i++;
    }

    //find first number
    for(int i = 0; i < input.size(); i++){
      if(input[i] == 'b'){
        point = i;
        break;
      }
      else{
        a[i] = input[i];
      }
    }

    //find second numbers
    for(int i = point + 1; i < input.size(); i++){
        b[i] = input[i];
    }

    //convert char[] to number
    while(i < a.size()){
      a_string = a_string + a[i];
    }
    int x = stoi(a_string);

    while(i < b.size()){
      b_string = b_string + b[i];
    }
    int y = stoi(b_string);

    return x + y;


    //A space not found in the user input
    if(line.find(char(32)) == npos){
      result = stoi(line);
      return result;
    }
  }


  return 0;
}
