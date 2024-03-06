#include<iostream>

using namespace std;

int func(int a, int b, int (*oper)(int, int)){
  return oper(a, b);
}

int sum(int a, int b){
  return a + b;
}

int main(){
  int a = 3;
  int b = 4;
  cout << func(a, b, sum);  // cout << func(a, b, &sum); 此为c++语法，前面的是c语法
  return 0;
}