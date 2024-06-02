#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void myPrint(int val){
  cout << val << " ";
}

class Transform{
public:
  int operator()(int val){
    return val + 100;
  }
};


int main(){
  vector<int> v;
  for(int i = 0; i < 10; i++){
    v.push_back(i);
  }

  vector<int> v2;
  v2.resize(v.size());
  transform(v.begin(), v.end(), v2.begin(), Transform());  // 搬运

  for_each(v2.begin(), v2.end(), myPrint);  // 函数对象

  return 0;
}