#include<iostream>
#include "3-1.cpp"
using namespace std;

bool huiwen(int x){
  int j = 0;
  int t = x;
  int sum = 0;

  for(j = 0; t > 1; j++)
    t /= 10;

  t = x;

  for(int i = j; t >= 1; i--){
    sum += (t % 10) * power(10, i);
    t /= 10;
  }

/*

while(i > 0){
  m = m * 10 + i % 10;
  i /= 10;
}

*/

  if(sum == x)
    return true;
  else
    return false;

/* return m == n; */

}

int main(){
  for(int i = 11; i < 1000; i++)
    if(huiwen(i) && huiwen(i * i) && huiwen(i * i * i))
      cout << i << endl;
  return 0;
}