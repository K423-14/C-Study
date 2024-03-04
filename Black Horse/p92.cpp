#include<iostream>

using namespace std;


int& func(){
  int a = 10;
  return a;  // 没有&号
}

// 正确的引用返回
int& func2(){
  static int a = 10;
  return a;
}

int main(){
  // cout << func() << endl;
  
  int &ref = func2();

  cout << ref << endl;

  // 返回的引用作为左值出现
  func2() = 1000;

  cout << ref << endl;

}