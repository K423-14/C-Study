#include<iostream>

using namespace std;

short int func(unsigned short int a, unsigned short int b){
  if(b == 0)
    return -1;
  else
    return a / b;

}

int main(){
  cout << func(8, 2);
  return 0;
}