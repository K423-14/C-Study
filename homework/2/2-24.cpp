#include<iostream>

using namespace std;

int main(){

  char x;
  do
  {
    cout << "今天下雨吗？" << endl;
    cin >> x;
    switch (x)
    {
    case 'Y':  // ""为字符串变量，''为字符变量
    case 'y':
      cout << "今天下雨！" << endl;
      break;
    
    case 'N':  // ""为字符串变量，''为字符变量
    case 'n':
      cout << "今天不下雨！" << endl;
      break;

    default:
      cout << "今天下雨吗？" << endl;
      cin >> x;
      break;
    }
  } while (x !='Y' && x != 'N' && x !='y' && x != 'n');
  
  return 0;
}
