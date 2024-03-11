#include<iostream>

using namespace std;

class Complex{
public:
  Complex(float r, float v);
  Complex(float r);

  void add(Complex& c2){  // 同一类的不同对象之间可以互相访问私有成员
    realNumber += c2.realNumber;
    virtualNumber += c2.virtualNumber;
  }

  void show(){
    cout << "The number is: " << realNumber << "+" << virtualNumber << "i" << endl;
  }

private:
  float realNumber;
  float virtualNumber;

};

Complex::Complex(float r, float v):realNumber(r), virtualNumber(v){}

Complex::Complex(float r):realNumber(r), virtualNumber(0){}


int main(){
  Complex c1(3, 5);
  Complex c2 = 4.5;
  c1.add(c2);
  c1.show();
  return 0;
}