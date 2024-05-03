#include<iostream>
#include<list>  // 双向循环链表

using namespace std;

void printList(const list<int> &l){  // 此处是const，下面必须用只读迭代器
  for(list<int>::const_iterator it = l.begin(); it != l.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
}

bool myCompare(int v1, int v2){  // 排序回调函数，使得其从小到大
  return v1 > v2;
}

int main(){
  list<int> l1;
  l1.assign(10, 5);  // 10个5
  list<int> l2 = {1, 2, 3, 4, 5};

  l1.swap(l2);  // 交换
  printList(l1);
  printList(l2);

  l1.remove(5);  // 删除所有的5，按值删除

  list<int>::iterator it = l2.begin();
  it++;  // 可以++，--
  it--;  // 双向
  // it += 1;  // 不可以随机访问，包括【】，at都不行

  l1.reverse();  // 反转，区别于reserve预留空间
  printList(l1);
  l1.sort();  // 不支持随机存取，不可以使用algorithm中的sort，默认从小到大
  printList(l1);
  l1.sort(myCompare);  // 从大到小
  printList(l1);


  return 0;
}