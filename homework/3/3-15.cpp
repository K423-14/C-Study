/*
#include<iostream>

using namespace std;

int getPower(int x, int y){
  if(y == 0)
    return 1;
  else if(y > 0)
    return x * getPower(x, y - 1);
  else
    return getPower(1.0 / x, (y + 1) * -1 );
}

double getPower(double x, int y){
  if(y == 0)
    return 1;
  else if(y > 0)
    return x * getPower(x, y - 1);
  else
    return 1 / x * getPower(x, y + 1);
}


int main(){
  int n = 3;
  int x = -2;
  cout << getPower(n, x);
  return 0;
}
*/

