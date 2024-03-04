#include<iostream>

using namespace std;

// greatest common divisor
int GMD(int a, int b){
  int gmd;
  for(int i = 1; i < a && i < b; i++){
    if(a % i == 0 && b % i == 0)
      gmd = i;
  }
  return gmd;
}

// Least common multiple
int LCM(int a, int b){
  for(int i = (a > b ? a : b); ; i++){
    if(i % a == 0 && i % b == 0)
      return i;
  }
}


int main(){
  cout << GMD(120, 72) << endl;
  cout << LCM(120, 72) << endl;
  return 0;
}