#include<iostream>
#include "3-1.cpp"
using namespace std;

double arctan(float x){
  double sum = 0.0;
  double temp = x;
  for(int i = 1; temp > 1E-15; i++){
    temp = power(x, i * 2 - 1) / (i * 2 - 1);
    sum += temp * power(-1, i+1);
  }
  return sum;
}


int main(){
  double pi;
  pi = 16.0 * arctan(1 / 5.0) - 4.0 * arctan(1 / 239.0);  // 注意分母要写成浮点数
  cout << pi;
  return 0;
}