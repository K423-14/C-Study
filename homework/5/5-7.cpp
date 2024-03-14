#include<iostream>

using namespace std;

class Cat{
public:
  Cat(){
    numOfCats++;
  }
  void getNumOfCats(){
    cout << "The current number of cats is: " << numOfCats << endl; 
  }
private:
  static int numOfCats;
};

// 类内声名类外初始化！！！
int Cat::numOfCats = 0;

int main(){
  Cat c1;
  Cat c2;
  c2.getNumOfCats();
  return 0;
}