#include<iostream>
using namespace std;
int main(){
  int input;
  cin >> input;

  cout << input << ' ';
  for(int i = input/2; i > 1; i--)
    if(input % i == 0)
      cout << i << ' ';
  
  return 0;
}