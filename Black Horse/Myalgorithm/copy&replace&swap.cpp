#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class myPrint{
public:
  void operator()(int x){
    cout << x << " ";
  }
};

class Greater30{
public:
  bool operator()(int x){
    if(x > 30)
      return true;
    else
      return false;
  }
};

int main(){
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);

  // copy
  vector<int> v2;
  v2.resize(v.size());  // 注意扩容
  copy(v.begin(), v.end(), v2.begin());
  for_each(v2.begin(), v2.end(), myPrint());
  cout << endl;

  // replace
  replace(v2.begin(), v2.end(), 20, 2000);
  for_each(v2.begin(), v2.end(), myPrint());
  cout << endl;

  // replace_if
  replace_if(v2.begin(), v2.end(), Greater30(), 3000);
  for_each(v2.begin(), v2.end(), myPrint());
  cout << endl;

  // swap同种类型容器互换
  swap(v, v2);
  for_each(v.begin(), v.end(), myPrint());
  cout << endl;
  for_each(v2.begin(), v2.end(), myPrint());
  cout << endl;


  return 0;
}