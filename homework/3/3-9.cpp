#include<iostream>

using namespace std;

bool func(int x){
  if(x == 0 || x == 1)
    return false;
  for(int i = 2; i < x; i++){
    if(x % i == 0)
      return false;
  }
  return true;
  
}

int main(){
  int x;
  cout << "输入一个数字，判断是否是质数: ";
  cin >> x;
  if(func(x))
    cout << endl << x << "是质数！" << endl;
  else
    cout << endl << x << "不是质数！" << endl;
  return 0;
}