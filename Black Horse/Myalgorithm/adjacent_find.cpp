#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// binary_search(v.begin(), v.end(), value);  // 必须是有序序列，二分查找，返回bool

int main(){
  vector<int> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(2);
  v.push_back(0);
  v.push_back(3);  // 相邻重复元素
  v.push_back(3);

  vector<int>::iterator it = adjacent_find(v.begin(), v.end());
  if(it == v.end())
    cout << "没找到！！" << endl;
  else
    cout << "找到相邻重复元素：" << *it << endl;

  return 0;
}
