// 函数重载简单使用

#include<iostream>

using namespace std;

int sumOfSquare(int a, int b){
  return a * a + b * b;
}

double sumOfSquare(double a, double b){
  return a * a + b * b;
}

int main(){
  cout << sumOfSquare(1, 2) << endl;
  cout << sumOfSquare(1.1, 1.2) << endl;
  return 0;
}