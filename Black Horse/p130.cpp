#include<iostream>

using namespace std;

class Father{
public:
  Father(){
    cout << "父类构造函数" << endl;
  }

  ~Father(){
    cout << "父类析构函数" << endl;
  }
};

class Son : public Father{
public:
  Son(){
    cout << "子类构造函数" << endl;
  }

  ~Son(){
    cout << "子类析构函数" << endl;
  }

};

int main(){
  Son s;
  return 0;
}
