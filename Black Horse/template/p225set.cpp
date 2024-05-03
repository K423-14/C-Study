#include<iostream>
#include<set>

using namespace std;

class myCompare{
public:
  bool operator()(int v1, int v2){
    return v1 > v2;
  }
};

template<typename T>
void printSet(T &s){
  for(typename T::iterator it = s.begin(); it != s.end(); it++){  // 此处T前面要加typename
    cout << *it << " ";
  }
  cout << endl;
}


int main(){
  set<int> s;
  multiset<int> ms;

  // 插入后自动排序，重复的只插入一个，set默认从小到大排序
  s.insert(1);  // 没push，只能这样插入
  s.insert(3);
  s.insert(2);
  s.insert(3);

  ms.insert(1);
  ms.insert(3);
  ms.insert(2);
  ms.insert(3);

  printSet(s);
  printSet(ms);

  // 不支持resize，有empty和size和swap

  // 删除，迭代器参数类似vector
  ms.erase(3);  // 类似list里面的remove，按值删除
  printSet(ms);

  // 查找统计
  s.find(3);  // 返回迭代器，找不到返回end()
  s.count(3);  // 返回3的个数，set里面只能是0或1，multiset可以是多个

  // multiset与set区别
  pair<set<int>::iterator, bool> res = s.insert(3);  // 插入失败返回false，multiset只返回迭代器（即插入位置）
  cout << res.second << endl;  // 取到pair里bool值

  // 对组pair，两种初始化方式
  pair<string, int> p1("Tom", 20);
  pair<string, int> p2 = make_pair("Jerry", 30);  // make_pair函数

  // 仿函数从大到小排序，自定义数据类型必须指定规则
  set<int, myCompare> s2;

  s2.insert(1);
  s2.insert(3);
  s2.insert(2);
  s2.insert(3);
  printSet(s2);

  return 0;
}
