#include<iostream>
#include "p182.hpp"
#include<string>
using namespace std;

class Person{
public:
  string name;
  int age;

  Person(string n, int a):name(n), age(a){};
  Person(){};  // 因为有了有参，所以默认不会自动生成需要自己定义i下

};


int main(){
  // MyArray<int> arr0(5);
  // 构造析构等测试
  // MyArray<int> arr1(arr0);
  // MyArray<int> arr2(100);
  // arr2 = arr1;

  // 功能性测试
  // for(int i = 0; i < 5; i++)
  //   arr0.Push_Back(i);
  // for(int i = 0; i < 5; i++)
  //   cout << arr0[i] << endl;
  // arr0.Pop_Back();
  // cout << showSize(arr0) << endl;
  // cout << showCapacity(arr0) << endl;
  
  // 自定义类型测试
  MyArray<Person> arr9(10);

  Person p1("孙悟空", 999);
  arr9.Push_Back(p1);
  cout << showSize(arr9) << endl;
  cout << showCapacity(arr9) << endl;
  cout << arr9[0].age << arr9[0].name << endl;


  return 0;
}