#include<iostream>
#include<string.h>

using namespace std;

class Person{
public:

  Person(int a, char n[20], int h);

  static int count;
  int age;
  char name[20];
  mutable int i;
  const int height;

  void test() const {
    i = 1;
  }

};

int Person::count = 10;
Person::Person(int a, char n[20], int h):age(a), height(h){
  strncpy(name, n, 19);
  // height = h;  // 报错，const只能用列表方式赋值
};

int main(){
  Person p = {20, "hhh", 165};

  // 联合体
  // union{
  // int i;
  // float j;
  // };

  // i = 10;
  // j = 2.2;

  // cout << "i=" << i << endl;
  // cout << "j=" << j << endl;
  

  cout << Person::count << endl;

  return 0;
}
