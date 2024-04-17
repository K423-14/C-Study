#include<iostream>
#include<queue>

using namespace std;

class Person{
public:
  Person(int age, string name):age(age), name(name){}
  int age;
  string name;
};

int main(){
  Person p1(40, "唐僧");
  Person p2(300, "孙悟空");
  Person p3(200, "猪八戒");
  Person p4(100, "沙僧");

  queue<Person> q;
  q.push(p1);
  q.push(p2);
  q.push(p3);
  q.push(p4);

  cout << "队列大小为：" << q.size() << endl;

  while(!q.empty()){
    cout << "队头元素————姓名：" << q.front().name << " 年龄：" << q.front().age << endl;
    cout << "队尾元素————姓名：" << q.back().name << " 年龄：" << q.back().age << endl;
    q.pop();
  }

  return 0;
}
