#include<iostream>

using namespace std;

int jiecheng(int x){
  if(x == 1) return 1;
  else return x * jiecheng(x-1);
}

int main(){
  cout << jiecheng(5);
  return 0;
}