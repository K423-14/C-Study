#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void myPrint(int val){
  cout << val << " ";
}

class MyPrint{
public:
  void operator()(int val){
    cout << val << " ";
  }
};

int main(){
  vector<int> v;
  for(int i = 0; i < 10; i++){
    v.push_back(i);
  }
  for_each(v.begin(), v.end(), myPrint);  // 函数对象
  for_each(v.begin(), v.end(), MyPrint());  // 函数重载

  return 0;
}