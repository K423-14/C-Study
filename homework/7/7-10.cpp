#include<iostream>

using namespace std;

class BaseClass{
public:
  void fn1(){
    cout << "Base类fn1函数调用" << endl;
  }
  void fn2(){
    cout << "Base类fn2函数调用" << endl;
  }
};

class DerivedClass : private BaseClass{
public:
  void fn1(){
    cout << "Derived类fn1函数调用" << endl;
    // BaseClass::fn1();
  }
  void fn2(){
    cout << "Derived类fn2函数调用" << endl;
    // BaseClass::fn1();
  }
};

int main(){
  DerivedClass d;
  DerivedClass *p1;
  // BaseClass *p2 = &d;  // private继承好像不可以这么用
  BaseClass *p2;
  p2->fn1();
  d.fn1();
  p1->fn1();
  return 0;
}