#include<iostream>

using namespace std;

int * func(){
  int * p = new int(10);
  int * q = new int[10];  // 10个整形的数组
  // return p, q;   // 不可以这么写，c++只能返回一个东西
  return p;
}

int main(){
  // int *p, *q = func();
  int *p= func();

  cout << *p << endl;
  delete p;
  cout << *p <<endl;
/*
  cout << *q << endl;
  delete[] q;
  cout << *q <<endl;
*/
  return 0;
}

