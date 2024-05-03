#include<iostream>
#include<vector>
#include<algorithm>

#include<functional>  // 联动240

using namespace std;

// 返回大于5的数，一元谓词
class GreaterFive{
public:
  bool operator()(int val){
    return val > 5;
  }
};

// 从大到小，二元谓词
class myCompare{
public:
  bool operator()(int val1, int val2){
    return val1 > val2;
  }
};

int main(){

  // init vector
  vector<int> v;
  for(int i = 0; i < 10; i++){
    v.push_back(i);
  }

  // one-element predicate
  if(find_if(v.begin(), v.end(), GreaterFive()) != v.end())  // 开头结尾函数对象（此处使用匿名），返回迭代器
    cout << *find_if(v.begin(), v.end(), GreaterFive()) << " is a number greater than 5." << endl;
  else
    cout << "There is no number greater than 5." << endl;

  // two-element predicate
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  cout << "----------------------" << endl;
  // sort(v.begin(), v.end(), myCompare());
  sort(v.begin(), v.end(), greater<int>());  // 联动240
  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  return 0;
}