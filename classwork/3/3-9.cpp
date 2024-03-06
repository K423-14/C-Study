/* 组合数 */

#include<iostream>

using namespace std;

int cnk(int n, int k){
  if(n == k || k == 0)
    return 1;
  else
    return cnk(n-1, k) + cnk(n-1, k-1);
}


int main(){
  cout << cnk(18, 5);
  return 0;
}