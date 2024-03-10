#include<iostream>

using namespace std;

class grandPa{
public:
  void func(){  // virtual后变son
    cout << "Grandpa类func：" << age << endl;  
  }
  int age;
};

class dad: public grandPa{
public:
  void func(){
    cout << "Dad类func：" << age << endl;
  }
};

class son: public dad{
public:
  void func(){
    cout << "Son类func：" << age << endl;
  }
};

int operator+(int &a, son &b){  // 参数多了少了都不行，且必须有自定义类型

}

int main(){
  grandPa* p;
  p = new son;
  p->func();
  return 0;
}