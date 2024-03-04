#include<iostream>

using namespace std;

float FtoC(float f){
  float c;
  c = 5.0 / 9.0 * (f - 32);  // 浮点数
  return c;
}

int main(){
  float f;
  cout << "Please input a F: ";
  cin >> f;
  cout << endl << "The counterpart ℃ is: " << FtoC(f) << endl;
  return 0;
}