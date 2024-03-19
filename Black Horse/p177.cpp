#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

template <class T1, class T2>
class Person{
public:
  Person(T1 a, T2 n):age(a), name(n){};
  void show(){
    cout << "Name: " << name << "  " << "Age: " << age << endl;
  }
private:
  T1 age;
  T2 name;
};

// 1.定义好参数再调用
void showPerson1(Person<int, string>& p){
  p.show();
}

// 2.函数模板联动
template<typename T1, typename T2>
void showPerson2(Person<T1, T2>& p){
  p.show();
}

// 3.再把person抽象起来
template <class T1>
void showPerson3(T1& p){
  p.show();
}

int main(){
  Person<int, string> p(500, "孙悟空");
  cout << typeid(p).name() << endl;
  showPerson1(p);
  showPerson2(p);
  showPerson3(p);
  return 0;
}