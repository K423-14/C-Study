#include<iostream>

using namespace std;

class Base{
public:
  void fn1(){
    cout << "Base类fn1函数调用" << endl;
  }
  void fn2(){
    cout << "Base类fn2函数调用" << endl;
  }
};

class Derived : private Base{
public:
  void fn1(){
    cout << "Derived类fn1函数调用" << endl;
    Base::fn1();
  }
};

int main(){
  Derived d;
  d.fn1();
  return 0;
}