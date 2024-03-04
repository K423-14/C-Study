#include<iostream>

using namespace std;

int sum(int n){
  if(n == 0)
    return 0;
  else
    return n + sum(n - 1);
}

int main(){
  int n;
  cout << "Please enter a number, and you'll get the sum: ";
  cin >> n;
  cout << endl << "The sum is: " << sum(n) << endl;
  return 0;
}