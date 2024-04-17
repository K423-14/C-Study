#include<iostream>
#include<deque>  // 使用中控器实现双端队列
#include<algorithm>

using namespace std;

void printDeque(deque<int> d){
  for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++){  // 此处使用只读迭代器
    cout << *it << endl;
  }
}

int main(){
  // 初始化
  deque<int> d1;
  for(int i = 0; i < 10; i++){
    d1.push_back(i);
  }
  printDeque(d1);

  // 由于其性质，没有容量，只有大小，resize大了用0填充

  // 插入删除
  deque<int> d2;
  // insert，erase提供迭代器！！！！
  d1.insert(d2.begin(), d1.begin(), d1.end());  // 区间插入，在d2的第一个位置插入d1的所有元素

  // 排序，所有支持随机存取的都可以
  sort(d1.begin(), d1.end());  // 不能使用sort(d1.begin(), d1.end(), greater<int>());  // 降序排序


  return 0;
}