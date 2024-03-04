#include<iostream>

using namespace std;

class Person{
public:
  Person(){
    cout << "默认构造" << endl;
  }

  Person(int age, int height){
    m_age = age;
    m_height = new int (height);
    cout << "有参构造" << endl;
  }

  // 自己写拷贝构造，解决浅拷贝问题
  Person(const Person &p){
    m_age = p.m_age;
    // m_height = p.m_height;  // 编译器默认的
    m_height = new int (*p.m_height);

    cout << "拷贝构造" << endl;

  }

  ~Person(){
    if(m_height != NULL){
      // 释放
      delete m_height;
      m_height = NULL;
    }
    cout << "析构函数" << endl;
  }

private:
  int m_age;
  int * m_height;
};


int main(){
  Person p(1, 1);
  Person p2(p);
  return 0;
}