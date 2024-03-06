#include<iostream>
#include<vector>

using namespace std;

int main(){

  vector<int> a(10, 0);

  a[8] = 1;

  // for(auto i = a.begin(); i != a.end(); i++)
  //   cout << *i << endl;  // 容器解引用

  for(auto i: a)
    cout << i << endl;

  return 0;
}