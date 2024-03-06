#include<iostream>

using namespace std;

int main(){
  int sum = 0;
  int i = 1;
  while(i<=10){
    sum += i;
    i++;
  }
  cout<<sum;
  return 0;
}