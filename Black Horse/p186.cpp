#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void intPrint(int i){
  cout << i << endl;
}

int main(){
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);

  // 1. for遍历
  for(vector<int>::iterator i = v.begin(); i != v.end(); i++)
    cout << *i << endl;  // 简单理解为指针即可

  // 2. algorithm遍历
  for_each(v.begin(), v.end(), intPrint);  // 起始迭代器，终止迭代器，回调函数

  return 0;
}