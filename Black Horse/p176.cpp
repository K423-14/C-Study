#include<iostream>

using namespace std;

class Person1{
public:
  void show1(){
    cout << "Person1 using!!!" << endl;
  }
};

class Person2{
public:
  void show2(){
    cout << "Person2 using!!!" << endl;
  }
};

// 不调用成员函数不会报错
template <class T>
class usePerson{
public:
  void show1(){
    t.show1();
  }
  void show2(){
    t.show2();
  }
private:
  T t;
};


int main(){
  usePerson<Person1> u;
  u.show1();
  // u.show2();  // 去掉这行可以运行，但是加上就会在上面报错
  return 0;
}
