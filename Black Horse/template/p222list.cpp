#include<iostream>
#include<list>  // 双向循环链表
#include<string>

using namespace std;

// 高级排序
class Person{
public:
  Person(string name, int age, int height):m_Name(name), m_Age(age), m_Height(height){}
  string m_Name;
  int m_Age;
  int m_Height;
};

bool myCompare(Person p1, Person p2){
  if(p1.m_Age == p2.m_Age)
    return p1.m_Height > p2.m_Height;  // 年龄相同，按身高降序
  else
    return p1.m_Age < p2.m_Age;  // 年龄不同，按年龄升序

}


int main(){
  Person p1("刘备", 35, 175);
  Person p2("关羽", 33, 190);
  Person p3("张飞", 35, 160);
  Person p4("赵云", 30, 180);
  Person p5("曹操", 40, 175);

  list<Person> l;
  l.push_back(p1);
  l.push_back(p2);
  l.push_back(p3);
  l.push_back(p4);
  l.push_back(p5);

  for(list<Person>::iterator it = l.begin(); it != l.end(); it++){
    cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
  }

  l.sort(myCompare);

  cout << "-----------------" << endl;
  for(list<Person>::iterator it = l.begin(); it != l.end(); it++){
    cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
  }

  return 0;
}