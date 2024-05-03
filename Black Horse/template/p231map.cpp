#include<iostream>
#include<map>

using namespace std;

template<typename T>
void printMap(T &m){
  for(typename T::iterator it = m.begin(); it != m.end(); it++){
    cout << "Key: " << it->first << " Value: " << it->second;
  }
  cout << endl;
}

int main(){

  // map的 key 是唯一的，multimap的key可以重复
  map<int, int> m1;  // map也根据key排序
  m1.insert(pair<int, int>(1, 10));
  m1.insert(make_pair(2, 20));  // 不用<int, int>
  m1.insert(map<int, int>::value_type(3, 30));
  m1[4] = 40;  

  cout << m1[4] << endl;  // 输出key为4的value

  // 同样有size，empty，swap操作

  m1.erase(4);  // 删除key为4的元素
  m1.find(3);  // 查找key为3的元素，返回迭代器，没找到返回end()
  m1.count(3);  // 返回key为3的元素个数，map里面只能是0或1，multimap可以是多个

  return  0;
}
