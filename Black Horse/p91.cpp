#include<iostream>

using namespace std;

// 指针
void swap01(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

// 引用
void swap02(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
}


int main(){
  int a = 10, b = 20;
  int &c = a;  // int* const c = a;   并且接下来调用c可以直接解引用
  // swap01(&a, &b);
  swap02(a, b);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  return 0 ;
}


