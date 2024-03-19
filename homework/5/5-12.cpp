#include<iostream>

using namespace std;

void fn1(){
  static int n;  // 静态从0开始
  n += 1;
  cout << n << endl;
}

int main(){
  for(int i = 0; i < 10; i++)
    fn1();
  
  return 0;
}