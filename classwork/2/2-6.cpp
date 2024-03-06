#include<iostream>
using namespace std;
/*int main(){

  int sum = 0, left, t, num, i = 0;

  cin>>left;

  do
  {
    t = i;
    num = left%10;
    left /= 10;
    while(t--)
      num *= 10;
    sum += num;
    i++;
  } while (left >= 1);
  
  cout<<sum;

  return 0;
}*/

int main(){
  int left, i = 0;
  cin >> left;

  do
  {
    i = left % 10;
    left /= 10;
    cout << i;
  } while (left != 0);
  
  return 0;
}