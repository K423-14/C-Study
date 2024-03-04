#include<iostream>

using namespace std;

// void func(int &a){
//   cout << "void func(int &a)调用" << endl;
// }

// void func(const int &a){
//   cout << "void func(const int &a)调用" << endl;
// }

// 带有默认参数的可能会引起二义性
// void func(int a, int b = 10){
//   cout << "func(int a, int b)" << endl;
// }

void func(int a){
  cout << "func(int a)" << endl;
}

int main(){
  int a = 10;
  func(a);  // 1

  func(10);  // 2，const int &a = 10合法 

  return 0;
}