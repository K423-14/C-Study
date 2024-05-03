#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  // Arithmetic imitation function
  negate<int> n;
  cout << "取反后结果为：" << n(50) << endl;
  plus<int> p;
  cout << "相加后结果为：" << p(50, 50) << endl;
  // Relational imitation function在238中写明示例，此处不加赘述
  // 大于greater，小于less，大于等于greater_equal，小于等于less_equal，等于equal_to，不等于not_equal_to

  // Logical imitation function
  vector<bool> v1;
  v1.push_back(true);
  v1.push_back(false);
  v1.push_back(true);
  v1.push_back(false);
  for(vector<bool>::iterator it = v1.begin(); it != v1.end(); it++){
    cout << *it << " ";
  }
  cout << endl << "----------------------" << endl;
  vector<bool> v2;
  v2.resize(v1.size());  // 必须先给v2分配空间，才可以使用transform
  transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
  for(vector<bool>::iterator it = v2.begin(); it != v2.end(); it++){
    cout << *it << " ";
  }

  return 0;
}