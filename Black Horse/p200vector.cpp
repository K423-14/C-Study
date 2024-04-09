#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int> &v){
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
}


int main(){

  /* 初始化 */
  // 1.默认构造
  vector<int> v1;
  for(int i = 0; i < 10; i++){
    v1.push_back(i);
  }
  // 2.区间构造
  vector<int> v2(v1.begin(), v1.end());  // end是最后一个元素的下一个位置，区间构造是左闭右开
  // 3.拷贝构造
  vector<int> v3(v2);
  // 4.有参构造
  vector<int> v4(10, 5);  // 10个5

  /* 赋值 */
  vector<int> v5;
  // v5 = v4;  // 等号赋值
  // v5.assign(v4.begin(), v4.end());  // 区间赋值
  // v5.assign(10, 6);  // 10个6

  /* 容量&大小 */
  if(v1.empty())
    cout << "v1为空" << endl;
  else{
    cout << "v1不为空" << endl;
    cout << "v1的容量为：" << v1.capacity() << endl;
    cout << "v1的大小为：" << v1.size() << endl;
  }
  v1.resize(15, 100);  // 重新构成15个，多的用100填充，少的删除；默认是0
  printVector(v1);

  /* 插入&删除 */
  v1.insert(v1.begin(), 100);  // 在第一个位置插入100
  v1.insert(v1.begin(), 2, 200);  // 在第一个位置插入两个200；迭代器，个数，值
  printVector(v1);
  v1.erase(v1.begin());  // 删除第一个元素
  v1.erase(v1.begin(), v1.begin() + 2);  // 区间删除
  printVector(v1);
  v1.clear();  // 清空

  /* 数据存取 */  // 经典[]和at此处不写了
  cout << "v2的第一个元素：" << v2.front() << endl; 
  cout << "v2的最后一个元素：" << v2.back() << endl; 

  /* 互换 */
  vector<int> v6(10000, 6);  // 很大的空间，但是仅用很小的地方
  v6.resize(3);
  cout << "v6的容量为：" << v6.capacity() << endl;
  cout << "v6的大小为：" << v6.size() << endl;
  vector<int>(v6).swap(v6);  // 交换，释放内存，本质是构造一个匿名对象，然后交换，匿名对象出本行就释放了
  cout << "v6的容量为：" << v6.capacity() << endl;
  cout << "v6的大小为：" << v6.size() << endl;

  /* 预留空间 */
  int num = 0;  // 扩容次数
  int *p = NULL;
  vector<int> v7;
  // v7.reserve(100000);  // 预留空间
  for(int i = 0; i < 100000; i++){
    v7.push_back(i);
    if(p != &v7[0]){  // 记录扩容次数
      p = &v7[0];
      num++;
    }
  }
  cout << "扩容次数：" << num << endl;


  return 0;
}
