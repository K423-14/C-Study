#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<ctime>

using namespace std;

void myPrint(int x){
  cout << x << " ";
}

int main(){
  vector<int> v;
  v.push_back(10);
  v.push_back(40);
  v.push_back(20);
  v.push_back(50);
  v.push_back(30);
  
  // sort 升序（默认）
  sort(v.begin(), v.end());
  for_each(v.begin(), v.end(), myPrint);
  cout << endl;

  // sort 降序
  // sort(v.begin(), v.end(), greater<int>());
  // for_each(v.begin(), v.end(), myPrint);
  // cout << endl;

  // random_shuffle打乱
  // srand((unsigned int)time(NULL));
  // random_shuffle(v.begin(), v.end());
  // for_each(v.begin(), v.end(), myPrint);
  // cout << endl;

  // merge合并，需要两有序序列
  vector<int> v2;
  v2.push_back(11);
  v2.push_back(42);
  v2.push_back(23);
  v2.push_back(54);
  v2.push_back(35);
  sort(v2.begin(), v2.end());

  vector<int> v3;
  // 首先需要扩容
  v3.resize(v.size()+v2.size());
  merge(v.begin(), v.end(), v2.begin(), v2.end(), v3.begin());
  for_each(v3.begin(), v3.end(), myPrint);
  cout << endl;


  // reverse 反转
  reverse(v3.begin(), v3.end());
  for_each(v3.begin(), v3.end(), myPrint);
  cout << endl;

  return 0;
}