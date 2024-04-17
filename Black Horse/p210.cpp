#include<iostream>
#include<deque>
#include<algorithm>
#include<string>
#include<vector>
#include<ctime>  // 随机数种子

using namespace std;

class Person{
public:
  Person(int score, string name):score(score), name(name){}
  int score;
  string name;
};

void creatPerson(vector<Person> &p){
  string nameSeed = "ABCDE";
  for(int i = 0; i < 5; i++)
    // p.push_back(Person(0, "Singer" + nameSeed[i]));
    p.push_back(Person(0, "Singer" + nameSeed.substr(i, 1)));
}

void setScore(vector<Person> &p){
  deque<int> d;
  for(vector<Person>::iterator it = p.begin(); it != p.end(); it++){
    for(int i = 0; i < 5; i++)
      d.push_back(rand() % 41 + 60);  // 插入5个成绩，范围60-100
    sort(d.begin(), d.end());  // 排序
    d.pop_back();  // 去掉最高分
    d.pop_front();  // 去掉最低分
    int sum = 0;
    for(deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
      sum += *dit;
    (*it).score = sum / d.size();  // 平均分
  }
}


int main(){
  srand((unsigned int)time(NULL));  // 随机数种子
  vector<Person> p;
  creatPerson(p);
  setScore(p);
  // 测试
  for(vector<Person>::iterator it = p.begin(); it != p.end(); it++){
    cout << "姓名：" << (*it).name << " 分数：" << (*it).score << endl;
  }

  return 0;
}