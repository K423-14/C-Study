#include<iostream>

using namespace std;

class Person{

// 加友元，访问私有权限
friend Person & operator+(Person & p1, Person & p2);
friend ostream & operator<<(ostream & cout, Person p);

public:
  Person(int a, int b, int c):m_A(a), m_B(b){
    m_C = new int(c);
  }
  
  // ++运算符重载前置
  Person & operator++(){
    ++this->m_A;
    return *this;
  }
  // ++运算符重载后置
  Person operator++(int){
    Person temp = *this;
    this->m_A++;
    return temp;
  }
  // =运算符重载
  Person & operator=(Person & p){
    if(m_C != NULL){
      delete m_C;
      m_C = NULL;
    }
    m_C = new int (*p.m_C);
      // *this->m_C = *p.m_C;
    return *this;
  }
  
  // ==运算符重载
  bool operator==(Person p){
    if(this->m_A == p.m_A && this->m_B == p.m_B && *this->m_C == *p.m_C)
      return true;
    return false;
  }

private:
  int m_A;
  int m_B;
  int *m_C;
};

// 加法重载
Person & operator+(Person & p1, Person & p2){
  Person p(p1.m_A + p2.m_A, p1.m_B + p2.m_B, 18);
  Person & p3 = p;
  return p3;
}

// 左移运算符重载
ostream & operator<<(ostream & cout, Person p){
  cout << p.m_A << endl;
  cout << p.m_B << endl;
  return cout;
}

int main(){

  // Person p1(10, 10, 18), p2(10, 10, 18);
  // Person p3 = p1 + p2;
  // cout << p3 << endl;

  // Person p1(10, 10, 18);
  // cout << p1++ << endl;
  // cout << ++p1 << endl; 

  Person p1(10, 10, 18), p2(10, 10, 20);

  p1 = p2;

  cout << (p1 == p2) << endl;

  system("pause");
  return 0;
}