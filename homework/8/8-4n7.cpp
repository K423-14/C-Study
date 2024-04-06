#include<iostream>

using namespace std;

class Count{
public:
  Count& operator+(Count& c){
    n += c.n;
    return *this;
  }
  Count(int num):n(num){};
  Count& operator++(){
    n++;
    return *this;
  }
  Count& operator++(int){
    Count *x = new Count(n);
    n++;
    return *x;
  }
friend ostream& operator<<(ostream& out, Count c);
private:
  int n;
};

ostream& operator<<(ostream& out, Count c){
  out << c.n << endl;
  return out;
}

int main(){
  Count c1(1);
  Count c2(2);
  c2 = c2 + c1;
  cout << c2;
  cout << c1;
  cout << ++c1;
  cout << c1++;
  cout << c1;
  return 0;
}