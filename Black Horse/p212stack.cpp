#include<iostream>
#include<stack>  // 栈

using namespace std;

int main(){
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  cout << "栈的大小为：" << s.size() << endl;

  while(!s.empty()){
    cout << "栈顶元素为：" << s.top() << endl;  // 取栈顶元素
    s.pop();
  }

  return 0;
}