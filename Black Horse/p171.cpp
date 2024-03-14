#include<iostream>

using namespace std;

int myAdd1(int a, int b){  // 可隐式类型转换
  return a + b;
}

template <typename T>
int myAdd2(T a, T b){
  return a + b;
}

template <typename T>
int myAdd3(T& a, T& b){
  return a + b;
}


int main(){
  int a = 10;
  char c = 'c';

  cout << myAdd1(a, c) << endl;
  // cout << myAdd2(a, c) << endl;  // 报错，不可隐式类型转换
  cout << myAdd2<int>(a, c) << endl;  // 指定后又可以转换了
  // cout << myAdd3<int&>(a, c) << endl;



  return 0;
}