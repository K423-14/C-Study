#include<iostream>
#include<string>

using namespace std;

int main(){

  // 构造函数，此处为有参，拷贝默认也可
  string s1(10, 'a');  // 10个char a
  cout << s1 << endl;

  // 赋值
  /* 一般等号赋值多一些 */
  string s2;
  s2.assign(10, 'b');
  cout << s2 << endl;
  string s3;
  s3.assign("hello C++", 5);  // 取前五个字符
  cout << s3 << endl;
  string s4;
  s4.assign(s1);
  cout << s4 << endl;

  // 追加
  string s5 = "我爱";
  s5 += "玩游戏";
  cout << s5 << endl;
  string s6("LOL xxx");
  s5.append(s6, 0, 3);  // 从第零个位置开始，三个，只有一个数那就是长度
  cout << s5 << endl;

  // 查找
  int pos0, pos1;
  pos0 = s5.find('L');  // 找不到返回-1
  pos1 = s5.rfind('L');  // 从后往前找
  cout << "pos0=" << pos0 << " pos1=" << pos1 << endl;

  // 替换
  s5.replace(0, 15, "I love game ");  // 起始位置，个数，替换字符串
  cout << s5 << endl;

  // 比较
  int res;
  res = s4.compare(s2);  // 0相等，1是4大，-1是1大
  cout << res << endl;

  // 单个字符存取
  s5[1];
  s5.at(1);
  cout << s5.length() << endl;  // size也一样

  // 插入&删除
  s5.insert(2, "don't ");  // 起始位置
  cout << s5 << endl;
  s5.erase(2, 6);  // 起始位置，多少个
  cout << s5 << endl;

  // 子串截取
  cout << s5.substr(2, 4) << endl;  // 起始位置，长度

  return 0;
}
