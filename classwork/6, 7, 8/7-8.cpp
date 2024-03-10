#include<iostream>

using namespace std;

class GF{
  public:
    GF(int v):var(v){}
    void getVar() const{
      cout << var << endl;
    }

  private:
    int var;
};
// GF::GF(int v):var(v){};  // 鸡肋有参构造函数

class Dad: virtual public GF{
  public:
    Dad(int v):GF(v){}  // 虚基类对于高层基类的默认构造跳过了！
};

class Mom: virtual public GF{
  public:
    Mom(int v):GF(v){}
};

class Son: public Dad, public Mom{
  public:
    Son(int v):GF(v), Dad(9), Mom(9){}
};

int main(){
  Son s(1);
  s.getVar();
  // Son s2(s);
  return 0;
}