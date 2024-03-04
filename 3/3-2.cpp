#include "3-1.cpp"
#include<iostream>
using namespace std;


// int power(int x, int n)


int main(){
  long int m;
  cin >> m;
  int j, sum = 0;
  for(int i = 0; m > 0; i++){
    j = m % 10;
    m /= 10;
    if(j)
      sum += power(2, i);
  }
  cout << sum;
  return 0;
}