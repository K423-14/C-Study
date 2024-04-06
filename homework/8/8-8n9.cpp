#include<iostream>

using namespace std;

class BaseClass{
public:
  virtual void fn1(){
    cout << "Base类fn1函数调用" << endl;
  }
  virtual void fn2(){
    cout << "Base类fn2函数调用" << endl;
  }
  virtual ~BaseClass(){cout << "BaseClass析构函数调用" << endl;}
};

class DerivedClass : public BaseClass{
public:
  void fn1(){
    cout << "Derived类fn1函数调用" << endl;
    // BaseClass::fn1();
  }
  void fn2(){
    cout << "Derived类fn2函数调用" << endl;
    // BaseClass::fn1();
  }
  ~DerivedClass(){cout << "DeriveClass析构函数调用" << endl;}
};

int main(){
  // DerivedClass d;
  // DerivedClass *p1 = &d;
  // BaseClass *p2 = &d;
  // p1->fn1();
  // p2->fn1();
  BaseClass *p2 = new DerivedClass;  // 这个可以delete，但是上面那种不行
  delete p2;
  return 0;
}