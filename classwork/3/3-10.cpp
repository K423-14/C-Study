/*汉诺塔*/

#include<iostream>

using namespace std;

 // 将src移动到dest上
void move(char src, char dest){
  cout << src << "-->" << dest << endl;
}

//主程序
void hannuota(char l, char m, char r, int n){
  if(n == 1) move(l, r);
  else{
    hannuota(l, r, m, n-1);
    move(l, r);
    hannuota(m, l, r, n-1);
  }
}

int main(){
  hannuota('A', 'B', 'C', 3);
  return 0;
}