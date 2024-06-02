#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class Person{
public:
  string name;
  int age;
  // 自定义数据类型需要重载==，否则无法使用
  bool operator==(const Person &p){
    if(this->name == p.name && this->age == p.age)
      return true;
    else
      return false;
  }
  Person(string n, int a):name(n),age(a){}
};

// find_if
class Greater20{
public:
  bool operator()(const Person &p){
    if(p.age > 20)
      return true;
    else
      return false;
  }
};

int main(){
  vector<Person> v;
  Person p1("aaa", 10);
  Person p2("bbb", 20);
  Person p3("ccc", 30);
  Person p4("ddd", 40);

  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);

  // find
  vector<Person>::iterator it = find(v.begin(), v.end(), p2);
  if(it == v.end())
    cout << "没找到！！" << endl;
  else
    cout << "找到" << it->name << "，年龄：" << it->age << endl;

  // find_if
  it = find_if(v.begin(), v.end(), Greater20());
  if(it == v.end())
    cout << "没找到！！" << endl;
  else
    cout << "找到" << it->name << "，年龄：" << it->age << endl;

  // count
  int num = count(v.begin(), v.end(), p2);
  cout << "p2数据个数：" << num << endl;

  // count_if
  num = count_if(v.begin(), v.end(), Greater20());
  cout << "大于20的个数：" << num << endl;

  return 0;
}