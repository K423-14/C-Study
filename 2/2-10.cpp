#include<iostream>
using namespace std;
int main(){
  int i = 0, j = 0, input;
  do
  {
    cin >> input;
    if (input > 0)
      i++;
    else if (input < 0)
      j++;
  } while (input != 0);
  
  cout << "The positive number is " << i << endl;
  cout << "The negative number is " << j << endl;
  return 0;
}